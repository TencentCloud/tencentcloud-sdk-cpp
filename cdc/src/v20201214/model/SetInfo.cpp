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

#include <tencentcloud/cdc/v20201214/model/SetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

SetInfo::SetInfo() :
    m_setIdHasBeenSet(false),
    m_setNameHasBeenSet(false),
    m_setTypeHasBeenSet(false),
    m_setSizeHasBeenSet(false),
    m_setStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_readTrafficHasBeenSet(false),
    m_writeTrafficHasBeenSet(false),
    m_readIOHasBeenSet(false),
    m_writeIOHasBeenSet(false),
    m_awaitHasBeenSet(false),
    m_utilHasBeenSet(false)
{
}

CoreInternalOutcome SetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SetId") && !value["SetId"].IsNull())
    {
        if (!value["SetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.SetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setId = string(value["SetId"].GetString());
        m_setIdHasBeenSet = true;
    }

    if (value.HasMember("SetName") && !value["SetName"].IsNull())
    {
        if (!value["SetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.SetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setName = string(value["SetName"].GetString());
        m_setNameHasBeenSet = true;
    }

    if (value.HasMember("SetType") && !value["SetType"].IsNull())
    {
        if (!value["SetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.SetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setType = string(value["SetType"].GetString());
        m_setTypeHasBeenSet = true;
    }

    if (value.HasMember("SetSize") && !value["SetSize"].IsNull())
    {
        if (!value["SetSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.SetSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_setSize = value["SetSize"].GetDouble();
        m_setSizeHasBeenSet = true;
    }

    if (value.HasMember("SetStatus") && !value["SetStatus"].IsNull())
    {
        if (!value["SetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.SetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setStatus = string(value["SetStatus"].GetString());
        m_setStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ReadTraffic") && !value["ReadTraffic"].IsNull())
    {
        if (!value["ReadTraffic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.ReadTraffic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_readTraffic.Deserialize(value["ReadTraffic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_readTrafficHasBeenSet = true;
    }

    if (value.HasMember("WriteTraffic") && !value["WriteTraffic"].IsNull())
    {
        if (!value["WriteTraffic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.WriteTraffic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_writeTraffic.Deserialize(value["WriteTraffic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_writeTrafficHasBeenSet = true;
    }

    if (value.HasMember("ReadIO") && !value["ReadIO"].IsNull())
    {
        if (!value["ReadIO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.ReadIO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_readIO.Deserialize(value["ReadIO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_readIOHasBeenSet = true;
    }

    if (value.HasMember("WriteIO") && !value["WriteIO"].IsNull())
    {
        if (!value["WriteIO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.WriteIO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_writeIO.Deserialize(value["WriteIO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_writeIOHasBeenSet = true;
    }

    if (value.HasMember("Await") && !value["Await"].IsNull())
    {
        if (!value["Await"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.Await` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_await.Deserialize(value["Await"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_awaitHasBeenSet = true;
    }

    if (value.HasMember("Util") && !value["Util"].IsNull())
    {
        if (!value["Util"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SetInfo.Util` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_util.Deserialize(value["Util"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_utilHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_setIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setId.c_str(), allocator).Move(), allocator);
    }

    if (m_setNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setName.c_str(), allocator).Move(), allocator);
    }

    if (m_setTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setType.c_str(), allocator).Move(), allocator);
    }

    if (m_setSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_setSize, allocator);
    }

    if (m_setStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_readTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_readTraffic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_writeTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_writeTraffic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_readIOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadIO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_readIO.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_writeIOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteIO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_writeIO.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_awaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Await";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_await.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_utilHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Util";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_util.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SetInfo::GetSetId() const
{
    return m_setId;
}

void SetInfo::SetSetId(const string& _setId)
{
    m_setId = _setId;
    m_setIdHasBeenSet = true;
}

bool SetInfo::SetIdHasBeenSet() const
{
    return m_setIdHasBeenSet;
}

string SetInfo::GetSetName() const
{
    return m_setName;
}

void SetInfo::SetSetName(const string& _setName)
{
    m_setName = _setName;
    m_setNameHasBeenSet = true;
}

bool SetInfo::SetNameHasBeenSet() const
{
    return m_setNameHasBeenSet;
}

string SetInfo::GetSetType() const
{
    return m_setType;
}

void SetInfo::SetSetType(const string& _setType)
{
    m_setType = _setType;
    m_setTypeHasBeenSet = true;
}

bool SetInfo::SetTypeHasBeenSet() const
{
    return m_setTypeHasBeenSet;
}

double SetInfo::GetSetSize() const
{
    return m_setSize;
}

void SetInfo::SetSetSize(const double& _setSize)
{
    m_setSize = _setSize;
    m_setSizeHasBeenSet = true;
}

bool SetInfo::SetSizeHasBeenSet() const
{
    return m_setSizeHasBeenSet;
}

string SetInfo::GetSetStatus() const
{
    return m_setStatus;
}

void SetInfo::SetSetStatus(const string& _setStatus)
{
    m_setStatus = _setStatus;
    m_setStatusHasBeenSet = true;
}

bool SetInfo::SetStatusHasBeenSet() const
{
    return m_setStatusHasBeenSet;
}

string SetInfo::GetCreateTime() const
{
    return m_createTime;
}

void SetInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SetInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

DetailData SetInfo::GetReadTraffic() const
{
    return m_readTraffic;
}

void SetInfo::SetReadTraffic(const DetailData& _readTraffic)
{
    m_readTraffic = _readTraffic;
    m_readTrafficHasBeenSet = true;
}

bool SetInfo::ReadTrafficHasBeenSet() const
{
    return m_readTrafficHasBeenSet;
}

DetailData SetInfo::GetWriteTraffic() const
{
    return m_writeTraffic;
}

void SetInfo::SetWriteTraffic(const DetailData& _writeTraffic)
{
    m_writeTraffic = _writeTraffic;
    m_writeTrafficHasBeenSet = true;
}

bool SetInfo::WriteTrafficHasBeenSet() const
{
    return m_writeTrafficHasBeenSet;
}

DetailData SetInfo::GetReadIO() const
{
    return m_readIO;
}

void SetInfo::SetReadIO(const DetailData& _readIO)
{
    m_readIO = _readIO;
    m_readIOHasBeenSet = true;
}

bool SetInfo::ReadIOHasBeenSet() const
{
    return m_readIOHasBeenSet;
}

DetailData SetInfo::GetWriteIO() const
{
    return m_writeIO;
}

void SetInfo::SetWriteIO(const DetailData& _writeIO)
{
    m_writeIO = _writeIO;
    m_writeIOHasBeenSet = true;
}

bool SetInfo::WriteIOHasBeenSet() const
{
    return m_writeIOHasBeenSet;
}

DetailData SetInfo::GetAwait() const
{
    return m_await;
}

void SetInfo::SetAwait(const DetailData& _await)
{
    m_await = _await;
    m_awaitHasBeenSet = true;
}

bool SetInfo::AwaitHasBeenSet() const
{
    return m_awaitHasBeenSet;
}

DetailData SetInfo::GetUtil() const
{
    return m_util;
}

void SetInfo::SetUtil(const DetailData& _util)
{
    m_util = _util;
    m_utilHasBeenSet = true;
}

bool SetInfo::UtilHasBeenSet() const
{
    return m_utilHasBeenSet;
}

