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

#include <tencentcloud/vod/v20180717/model/DescribeFileAttributesTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DescribeFileAttributesTaskOutput::DescribeFileAttributesTaskOutput() :
    m_md5HasBeenSet(false),
    m_sha1HasBeenSet(false)
{
}

CoreInternalOutcome DescribeFileAttributesTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeFileAttributesTaskOutput.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("Sha1") && !value["Sha1"].IsNull())
    {
        if (!value["Sha1"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeFileAttributesTaskOutput.Sha1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sha1 = string(value["Sha1"].GetString());
        m_sha1HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeFileAttributesTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_sha1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sha1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sha1.c_str(), allocator).Move(), allocator);
    }

}


string DescribeFileAttributesTaskOutput::GetMd5() const
{
    return m_md5;
}

void DescribeFileAttributesTaskOutput::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool DescribeFileAttributesTaskOutput::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string DescribeFileAttributesTaskOutput::GetSha1() const
{
    return m_sha1;
}

void DescribeFileAttributesTaskOutput::SetSha1(const string& _sha1)
{
    m_sha1 = _sha1;
    m_sha1HasBeenSet = true;
}

bool DescribeFileAttributesTaskOutput::Sha1HasBeenSet() const
{
    return m_sha1HasBeenSet;
}

