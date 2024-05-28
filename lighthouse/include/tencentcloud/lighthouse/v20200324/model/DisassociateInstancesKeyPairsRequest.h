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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DisassociateInstancesKeyPairs请求参数结构体
                */
                class DisassociateInstancesKeyPairsRequest : public AbstractModel
                {
                public:
                    DisassociateInstancesKeyPairsRequest();
                    ~DisassociateInstancesKeyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取密钥对 ID 列表，每次请求批量密钥对的上限为 100。可通过[DescribeKeyPairs](https://cloud.tencent.com/document/api/1207/55540)接口返回值中的KeyId获取。
                     * @return KeyIds 密钥对 ID 列表，每次请求批量密钥对的上限为 100。可通过[DescribeKeyPairs](https://cloud.tencent.com/document/api/1207/55540)接口返回值中的KeyId获取。
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置密钥对 ID 列表，每次请求批量密钥对的上限为 100。可通过[DescribeKeyPairs](https://cloud.tencent.com/document/api/1207/55540)接口返回值中的KeyId获取。
                     * @param _keyIds 密钥对 ID 列表，每次请求批量密钥对的上限为 100。可通过[DescribeKeyPairs](https://cloud.tencent.com/document/api/1207/55540)接口返回值中的KeyId获取。
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取实例 ID 列表。每次请求批量实例的上限为 100。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * @return InstanceIds 实例 ID 列表。每次请求批量实例的上限为 100。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID 列表。每次请求批量实例的上限为 100。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * @param _instanceIds 实例 ID 列表。每次请求批量实例的上限为 100。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 密钥对 ID 列表，每次请求批量密钥对的上限为 100。可通过[DescribeKeyPairs](https://cloud.tencent.com/document/api/1207/55540)接口返回值中的KeyId获取。
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * 实例 ID 列表。每次请求批量实例的上限为 100。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_
