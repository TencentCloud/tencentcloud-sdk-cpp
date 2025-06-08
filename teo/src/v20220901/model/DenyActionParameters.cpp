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

#include <tencentcloud/teo/v20220901/model/DenyActionParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DenyActionParameters::DenyActionParameters() :
    m_blockIpHasBeenSet(false),
    m_blockIpDurationHasBeenSet(false),
    m_returnCustomPageHasBeenSet(false),
    m_responseCodeHasBeenSet(false),
    m_errorPageIdHasBeenSet(false),
    m_stallHasBeenSet(false)
{
}

CoreInternalOutcome DenyActionParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BlockIp") && !value["BlockIp"].IsNull())
    {
        if (!value["BlockIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DenyActionParameters.BlockIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockIp = string(value["BlockIp"].GetString());
        m_blockIpHasBeenSet = true;
    }

    if (value.HasMember("BlockIpDuration") && !value["BlockIpDuration"].IsNull())
    {
        if (!value["BlockIpDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DenyActionParameters.BlockIpDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockIpDuration = string(value["BlockIpDuration"].GetString());
        m_blockIpDurationHasBeenSet = true;
    }

    if (value.HasMember("ReturnCustomPage") && !value["ReturnCustomPage"].IsNull())
    {
        if (!value["ReturnCustomPage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DenyActionParameters.ReturnCustomPage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnCustomPage = string(value["ReturnCustomPage"].GetString());
        m_returnCustomPageHasBeenSet = true;
    }

    if (value.HasMember("ResponseCode") && !value["ResponseCode"].IsNull())
    {
        if (!value["ResponseCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DenyActionParameters.ResponseCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseCode = string(value["ResponseCode"].GetString());
        m_responseCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorPageId") && !value["ErrorPageId"].IsNull())
    {
        if (!value["ErrorPageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DenyActionParameters.ErrorPageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorPageId = string(value["ErrorPageId"].GetString());
        m_errorPageIdHasBeenSet = true;
    }

    if (value.HasMember("Stall") && !value["Stall"].IsNull())
    {
        if (!value["Stall"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DenyActionParameters.Stall` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stall = string(value["Stall"].GetString());
        m_stallHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DenyActionParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blockIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockIp.c_str(), allocator).Move(), allocator);
    }

    if (m_blockIpDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockIpDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockIpDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_returnCustomPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCustomPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnCustomPage.c_str(), allocator).Move(), allocator);
    }

    if (m_responseCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorPageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorPageId.c_str(), allocator).Move(), allocator);
    }

    if (m_stallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stall.c_str(), allocator).Move(), allocator);
    }

}


string DenyActionParameters::GetBlockIp() const
{
    return m_blockIp;
}

void DenyActionParameters::SetBlockIp(const string& _blockIp)
{
    m_blockIp = _blockIp;
    m_blockIpHasBeenSet = true;
}

bool DenyActionParameters::BlockIpHasBeenSet() const
{
    return m_blockIpHasBeenSet;
}

string DenyActionParameters::GetBlockIpDuration() const
{
    return m_blockIpDuration;
}

void DenyActionParameters::SetBlockIpDuration(const string& _blockIpDuration)
{
    m_blockIpDuration = _blockIpDuration;
    m_blockIpDurationHasBeenSet = true;
}

bool DenyActionParameters::BlockIpDurationHasBeenSet() const
{
    return m_blockIpDurationHasBeenSet;
}

string DenyActionParameters::GetReturnCustomPage() const
{
    return m_returnCustomPage;
}

void DenyActionParameters::SetReturnCustomPage(const string& _returnCustomPage)
{
    m_returnCustomPage = _returnCustomPage;
    m_returnCustomPageHasBeenSet = true;
}

bool DenyActionParameters::ReturnCustomPageHasBeenSet() const
{
    return m_returnCustomPageHasBeenSet;
}

string DenyActionParameters::GetResponseCode() const
{
    return m_responseCode;
}

void DenyActionParameters::SetResponseCode(const string& _responseCode)
{
    m_responseCode = _responseCode;
    m_responseCodeHasBeenSet = true;
}

bool DenyActionParameters::ResponseCodeHasBeenSet() const
{
    return m_responseCodeHasBeenSet;
}

string DenyActionParameters::GetErrorPageId() const
{
    return m_errorPageId;
}

void DenyActionParameters::SetErrorPageId(const string& _errorPageId)
{
    m_errorPageId = _errorPageId;
    m_errorPageIdHasBeenSet = true;
}

bool DenyActionParameters::ErrorPageIdHasBeenSet() const
{
    return m_errorPageIdHasBeenSet;
}

string DenyActionParameters::GetStall() const
{
    return m_stall;
}

void DenyActionParameters::SetStall(const string& _stall)
{
    m_stall = _stall;
    m_stallHasBeenSet = true;
}

bool DenyActionParameters::StallHasBeenSet() const
{
    return m_stallHasBeenSet;
}

