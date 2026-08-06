/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cfw/v20190904/model/WhiteRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

WhiteRuleInfo::WhiteRuleInfo() :
    m_dstIPHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_idsRuleIdHasBeenSet(false),
    m_idsRuleNameHasBeenSet(false),
    m_iocHasBeenSet(false),
    m_srcIPHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_whiteIdHasBeenSet(false),
    m_xForwardedForHasBeenSet(false)
{
}

CoreInternalOutcome WhiteRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DstIP") && !value["DstIP"].IsNull())
    {
        if (!value["DstIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.DstIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIP = string(value["DstIP"].GetString());
        m_dstIPHasBeenSet = true;
    }

    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("IdsRuleId") && !value["IdsRuleId"].IsNull())
    {
        if (!value["IdsRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.IdsRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idsRuleId = string(value["IdsRuleId"].GetString());
        m_idsRuleIdHasBeenSet = true;
    }

    if (value.HasMember("IdsRuleName") && !value["IdsRuleName"].IsNull())
    {
        if (!value["IdsRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.IdsRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idsRuleName = string(value["IdsRuleName"].GetString());
        m_idsRuleNameHasBeenSet = true;
    }

    if (value.HasMember("Ioc") && !value["Ioc"].IsNull())
    {
        if (!value["Ioc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.Ioc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ioc = string(value["Ioc"].GetString());
        m_iocHasBeenSet = true;
    }

    if (value.HasMember("SrcIP") && !value["SrcIP"].IsNull())
    {
        if (!value["SrcIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.SrcIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIP = string(value["SrcIP"].GetString());
        m_srcIPHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("WhiteId") && !value["WhiteId"].IsNull())
    {
        if (!value["WhiteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.WhiteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whiteId = string(value["WhiteId"].GetString());
        m_whiteIdHasBeenSet = true;
    }

    if (value.HasMember("XForwardedFor") && !value["XForwardedFor"].IsNull())
    {
        if (!value["XForwardedFor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteRuleInfo.XForwardedFor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedFor = string(value["XForwardedFor"].GetString());
        m_xForwardedForHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WhiteRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dstIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIP.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_idsRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdsRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idsRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_idsRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdsRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idsRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_iocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ioc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ioc.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIP.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whiteId.c_str(), allocator).Move(), allocator);
    }

    if (m_xForwardedForHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedFor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xForwardedFor.c_str(), allocator).Move(), allocator);
    }

}


string WhiteRuleInfo::GetDstIP() const
{
    return m_dstIP;
}

void WhiteRuleInfo::SetDstIP(const string& _dstIP)
{
    m_dstIP = _dstIP;
    m_dstIPHasBeenSet = true;
}

bool WhiteRuleInfo::DstIPHasBeenSet() const
{
    return m_dstIPHasBeenSet;
}

string WhiteRuleInfo::GetFileMd5() const
{
    return m_fileMd5;
}

void WhiteRuleInfo::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool WhiteRuleInfo::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string WhiteRuleInfo::GetFileName() const
{
    return m_fileName;
}

void WhiteRuleInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool WhiteRuleInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string WhiteRuleInfo::GetHostName() const
{
    return m_hostName;
}

void WhiteRuleInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool WhiteRuleInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

int64_t WhiteRuleInfo::GetId() const
{
    return m_id;
}

void WhiteRuleInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool WhiteRuleInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string WhiteRuleInfo::GetIdsRuleId() const
{
    return m_idsRuleId;
}

void WhiteRuleInfo::SetIdsRuleId(const string& _idsRuleId)
{
    m_idsRuleId = _idsRuleId;
    m_idsRuleIdHasBeenSet = true;
}

bool WhiteRuleInfo::IdsRuleIdHasBeenSet() const
{
    return m_idsRuleIdHasBeenSet;
}

string WhiteRuleInfo::GetIdsRuleName() const
{
    return m_idsRuleName;
}

void WhiteRuleInfo::SetIdsRuleName(const string& _idsRuleName)
{
    m_idsRuleName = _idsRuleName;
    m_idsRuleNameHasBeenSet = true;
}

bool WhiteRuleInfo::IdsRuleNameHasBeenSet() const
{
    return m_idsRuleNameHasBeenSet;
}

string WhiteRuleInfo::GetIoc() const
{
    return m_ioc;
}

void WhiteRuleInfo::SetIoc(const string& _ioc)
{
    m_ioc = _ioc;
    m_iocHasBeenSet = true;
}

bool WhiteRuleInfo::IocHasBeenSet() const
{
    return m_iocHasBeenSet;
}

string WhiteRuleInfo::GetSrcIP() const
{
    return m_srcIP;
}

void WhiteRuleInfo::SetSrcIP(const string& _srcIP)
{
    m_srcIP = _srcIP;
    m_srcIPHasBeenSet = true;
}

bool WhiteRuleInfo::SrcIPHasBeenSet() const
{
    return m_srcIPHasBeenSet;
}

string WhiteRuleInfo::GetUrl() const
{
    return m_url;
}

void WhiteRuleInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool WhiteRuleInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string WhiteRuleInfo::GetUserAgent() const
{
    return m_userAgent;
}

void WhiteRuleInfo::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool WhiteRuleInfo::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string WhiteRuleInfo::GetWhiteId() const
{
    return m_whiteId;
}

void WhiteRuleInfo::SetWhiteId(const string& _whiteId)
{
    m_whiteId = _whiteId;
    m_whiteIdHasBeenSet = true;
}

bool WhiteRuleInfo::WhiteIdHasBeenSet() const
{
    return m_whiteIdHasBeenSet;
}

string WhiteRuleInfo::GetXForwardedFor() const
{
    return m_xForwardedFor;
}

void WhiteRuleInfo::SetXForwardedFor(const string& _xForwardedFor)
{
    m_xForwardedFor = _xForwardedFor;
    m_xForwardedForHasBeenSet = true;
}

bool WhiteRuleInfo::XForwardedForHasBeenSet() const
{
    return m_xForwardedForHasBeenSet;
}

