/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ms/v20180408/model/IOSResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

IOSResult::IOSResult() :
    m_resultIdHasBeenSet(false),
    m_opUinHasBeenSet(false),
    m_encryptTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_encryptStateHasBeenSet(false),
    m_encryptErrnoHasBeenSet(false),
    m_encryptErrDescHasBeenSet(false),
    m_creatTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_encryptPkgUrlHasBeenSet(false)
{
}

CoreInternalOutcome IOSResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultId") && !value["ResultId"].IsNull())
    {
        if (!value["ResultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.ResultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultId = string(value["ResultId"].GetString());
        m_resultIdHasBeenSet = true;
    }

    if (value.HasMember("OpUin") && !value["OpUin"].IsNull())
    {
        if (!value["OpUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.OpUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_opUin = value["OpUin"].GetInt64();
        m_opUinHasBeenSet = true;
    }

    if (value.HasMember("EncryptType") && !value["EncryptType"].IsNull())
    {
        if (!value["EncryptType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.EncryptType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptType = string(value["EncryptType"].GetString());
        m_encryptTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("EncryptState") && !value["EncryptState"].IsNull())
    {
        if (!value["EncryptState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.EncryptState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptState = value["EncryptState"].GetInt64();
        m_encryptStateHasBeenSet = true;
    }

    if (value.HasMember("EncryptErrno") && !value["EncryptErrno"].IsNull())
    {
        if (!value["EncryptErrno"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.EncryptErrno` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptErrno = value["EncryptErrno"].GetInt64();
        m_encryptErrnoHasBeenSet = true;
    }

    if (value.HasMember("EncryptErrDesc") && !value["EncryptErrDesc"].IsNull())
    {
        if (!value["EncryptErrDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.EncryptErrDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptErrDesc = string(value["EncryptErrDesc"].GetString());
        m_encryptErrDescHasBeenSet = true;
    }

    if (value.HasMember("CreatTime") && !value["CreatTime"].IsNull())
    {
        if (!value["CreatTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.CreatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatTime = string(value["CreatTime"].GetString());
        m_creatTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.CostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetInt64();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("EncryptPkgUrl") && !value["EncryptPkgUrl"].IsNull())
    {
        if (!value["EncryptPkgUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.EncryptPkgUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptPkgUrl = string(value["EncryptPkgUrl"].GetString());
        m_encryptPkgUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IOSResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultId.c_str(), allocator).Move(), allocator);
    }

    if (m_opUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opUin, allocator);
    }

    if (m_encryptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptState, allocator);
    }

    if (m_encryptErrnoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptErrno";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptErrno, allocator);
    }

    if (m_encryptErrDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptErrDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptErrDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_creatTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_encryptPkgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptPkgUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptPkgUrl.c_str(), allocator).Move(), allocator);
    }

}


string IOSResult::GetResultId() const
{
    return m_resultId;
}

void IOSResult::SetResultId(const string& _resultId)
{
    m_resultId = _resultId;
    m_resultIdHasBeenSet = true;
}

bool IOSResult::ResultIdHasBeenSet() const
{
    return m_resultIdHasBeenSet;
}

int64_t IOSResult::GetOpUin() const
{
    return m_opUin;
}

void IOSResult::SetOpUin(const int64_t& _opUin)
{
    m_opUin = _opUin;
    m_opUinHasBeenSet = true;
}

bool IOSResult::OpUinHasBeenSet() const
{
    return m_opUinHasBeenSet;
}

string IOSResult::GetEncryptType() const
{
    return m_encryptType;
}

void IOSResult::SetEncryptType(const string& _encryptType)
{
    m_encryptType = _encryptType;
    m_encryptTypeHasBeenSet = true;
}

bool IOSResult::EncryptTypeHasBeenSet() const
{
    return m_encryptTypeHasBeenSet;
}

string IOSResult::GetResourceId() const
{
    return m_resourceId;
}

void IOSResult::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool IOSResult::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t IOSResult::GetEncryptState() const
{
    return m_encryptState;
}

void IOSResult::SetEncryptState(const int64_t& _encryptState)
{
    m_encryptState = _encryptState;
    m_encryptStateHasBeenSet = true;
}

bool IOSResult::EncryptStateHasBeenSet() const
{
    return m_encryptStateHasBeenSet;
}

int64_t IOSResult::GetEncryptErrno() const
{
    return m_encryptErrno;
}

void IOSResult::SetEncryptErrno(const int64_t& _encryptErrno)
{
    m_encryptErrno = _encryptErrno;
    m_encryptErrnoHasBeenSet = true;
}

bool IOSResult::EncryptErrnoHasBeenSet() const
{
    return m_encryptErrnoHasBeenSet;
}

string IOSResult::GetEncryptErrDesc() const
{
    return m_encryptErrDesc;
}

void IOSResult::SetEncryptErrDesc(const string& _encryptErrDesc)
{
    m_encryptErrDesc = _encryptErrDesc;
    m_encryptErrDescHasBeenSet = true;
}

bool IOSResult::EncryptErrDescHasBeenSet() const
{
    return m_encryptErrDescHasBeenSet;
}

string IOSResult::GetCreatTime() const
{
    return m_creatTime;
}

void IOSResult::SetCreatTime(const string& _creatTime)
{
    m_creatTime = _creatTime;
    m_creatTimeHasBeenSet = true;
}

bool IOSResult::CreatTimeHasBeenSet() const
{
    return m_creatTimeHasBeenSet;
}

string IOSResult::GetStartTime() const
{
    return m_startTime;
}

void IOSResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool IOSResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string IOSResult::GetEndTime() const
{
    return m_endTime;
}

void IOSResult::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool IOSResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t IOSResult::GetCostTime() const
{
    return m_costTime;
}

void IOSResult::SetCostTime(const int64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool IOSResult::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string IOSResult::GetEncryptPkgUrl() const
{
    return m_encryptPkgUrl;
}

void IOSResult::SetEncryptPkgUrl(const string& _encryptPkgUrl)
{
    m_encryptPkgUrl = _encryptPkgUrl;
    m_encryptPkgUrlHasBeenSet = true;
}

bool IOSResult::EncryptPkgUrlHasBeenSet() const
{
    return m_encryptPkgUrlHasBeenSet;
}

