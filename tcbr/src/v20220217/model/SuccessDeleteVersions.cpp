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

#include <tencentcloud/tcbr/v20220217/model/SuccessDeleteVersions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

SuccessDeleteVersions::SuccessDeleteVersions() :
    m_versionHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome SuccessDeleteVersions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessDeleteVersions.Version` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_version.Deserialize(value["Version"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_versionHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessDeleteVersions.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessDeleteVersions.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuccessDeleteVersions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_version.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

}


SimpleVersion SuccessDeleteVersions::GetVersion() const
{
    return m_version;
}

void SuccessDeleteVersions::SetVersion(const SimpleVersion& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SuccessDeleteVersions::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SuccessDeleteVersions::GetRequestId() const
{
    return m_requestId;
}

void SuccessDeleteVersions::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool SuccessDeleteVersions::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string SuccessDeleteVersions::GetResult() const
{
    return m_result;
}

void SuccessDeleteVersions::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool SuccessDeleteVersions::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

