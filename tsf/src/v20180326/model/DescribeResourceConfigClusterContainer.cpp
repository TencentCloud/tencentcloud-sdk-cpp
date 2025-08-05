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

#include <tencentcloud/tsf/v20180326/model/DescribeResourceConfigClusterContainer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeResourceConfigClusterContainer::DescribeResourceConfigClusterContainer() :
    m_needSubnetWhenCreatingClusterHasBeenSet(false)
{
}

CoreInternalOutcome DescribeResourceConfigClusterContainer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NeedSubnetWhenCreatingCluster") && !value["NeedSubnetWhenCreatingCluster"].IsNull())
    {
        if (!value["NeedSubnetWhenCreatingCluster"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourceConfigClusterContainer.NeedSubnetWhenCreatingCluster` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needSubnetWhenCreatingCluster = value["NeedSubnetWhenCreatingCluster"].GetBool();
        m_needSubnetWhenCreatingClusterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeResourceConfigClusterContainer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_needSubnetWhenCreatingClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSubnetWhenCreatingCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needSubnetWhenCreatingCluster, allocator);
    }

}


bool DescribeResourceConfigClusterContainer::GetNeedSubnetWhenCreatingCluster() const
{
    return m_needSubnetWhenCreatingCluster;
}

void DescribeResourceConfigClusterContainer::SetNeedSubnetWhenCreatingCluster(const bool& _needSubnetWhenCreatingCluster)
{
    m_needSubnetWhenCreatingCluster = _needSubnetWhenCreatingCluster;
    m_needSubnetWhenCreatingClusterHasBeenSet = true;
}

bool DescribeResourceConfigClusterContainer::NeedSubnetWhenCreatingClusterHasBeenSet() const
{
    return m_needSubnetWhenCreatingClusterHasBeenSet;
}

