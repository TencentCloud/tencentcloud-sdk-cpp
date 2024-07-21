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

#include <tencentcloud/cynosdb/v20190107/model/PackagePriority.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

PackagePriority::PackagePriority() :
    m_packageIdHasBeenSet(false),
    m_deductionPriorityHasBeenSet(false)
{
}

CoreInternalOutcome PackagePriority::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackagePriority.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("DeductionPriority") && !value["DeductionPriority"].IsNull())
    {
        if (!value["DeductionPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackagePriority.DeductionPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductionPriority = value["DeductionPriority"].GetInt64();
        m_deductionPriorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackagePriority::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_deductionPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductionPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductionPriority, allocator);
    }

}


string PackagePriority::GetPackageId() const
{
    return m_packageId;
}

void PackagePriority::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool PackagePriority::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

int64_t PackagePriority::GetDeductionPriority() const
{
    return m_deductionPriority;
}

void PackagePriority::SetDeductionPriority(const int64_t& _deductionPriority)
{
    m_deductionPriority = _deductionPriority;
    m_deductionPriorityHasBeenSet = true;
}

bool PackagePriority::DeductionPriorityHasBeenSet() const
{
    return m_deductionPriorityHasBeenSet;
}

