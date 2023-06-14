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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取可以通过以下方式获取可用的实例ID：
通过登录控制台查询实例ID。
通过调用接口 DescribeInstances ，取返回信息中的 InstanceId 获取实例ID。
                     * @return InstanceIds 可以通过以下方式获取可用的实例ID：
通过登录控制台查询实例ID。
通过调用接口 DescribeInstances ，取返回信息中的 InstanceId 获取实例ID。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置可以通过以下方式获取可用的实例ID：
通过登录控制台查询实例ID。
通过调用接口 DescribeInstances ，取返回信息中的 InstanceId 获取实例ID。
                     * @param _instanceIds 可以通过以下方式获取可用的实例ID：
通过登录控制台查询实例ID。
通过调用接口 DescribeInstances ，取返回信息中的 InstanceId 获取实例ID。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取密钥对ID列表，每次请求批量密钥对的上限为100。密钥对ID形如：skey-11112222。

可以通过以下方式获取可用的密钥ID：
通过登录控制台查询密钥ID。
通过调用接口 DescribeKeyPairs ，取返回信息中的 KeyId 获取密钥对ID。
                     * @return KeyIds 密钥对ID列表，每次请求批量密钥对的上限为100。密钥对ID形如：skey-11112222。

可以通过以下方式获取可用的密钥ID：
通过登录控制台查询密钥ID。
通过调用接口 DescribeKeyPairs ，取返回信息中的 KeyId 获取密钥对ID。
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置密钥对ID列表，每次请求批量密钥对的上限为100。密钥对ID形如：skey-11112222。

可以通过以下方式获取可用的密钥ID：
通过登录控制台查询密钥ID。
通过调用接口 DescribeKeyPairs ，取返回信息中的 KeyId 获取密钥对ID。
                     * @param _keyIds 密钥对ID列表，每次请求批量密钥对的上限为100。密钥对ID形如：skey-11112222。

可以通过以下方式获取可用的密钥ID：
通过登录控制台查询密钥ID。
通过调用接口 DescribeKeyPairs ，取返回信息中的 KeyId 获取密钥对ID。
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
                     * 获取是否对运行中的实例选择强制关机。建议对运行中的实例先手动关机，然后再解绑密钥。取值范围：
TRUE：表示在正常关机失败后进行强制关机。
FALSE：表示在正常关机失败后不进行强制关机。

默认取值：FALSE。
                     * @return ForceStop 是否对运行中的实例选择强制关机。建议对运行中的实例先手动关机，然后再解绑密钥。取值范围：
TRUE：表示在正常关机失败后进行强制关机。
FALSE：表示在正常关机失败后不进行强制关机。

默认取值：FALSE。
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置是否对运行中的实例选择强制关机。建议对运行中的实例先手动关机，然后再解绑密钥。取值范围：
TRUE：表示在正常关机失败后进行强制关机。
FALSE：表示在正常关机失败后不进行强制关机。

默认取值：FALSE。
                     * @param _forceStop 是否对运行中的实例选择强制关机。建议对运行中的实例先手动关机，然后再解绑密钥。取值范围：
TRUE：表示在正常关机失败后进行强制关机。
FALSE：表示在正常关机失败后不进行强制关机。

默认取值：FALSE。
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                private:

                    /**
                     * 可以通过以下方式获取可用的实例ID：
通过登录控制台查询实例ID。
通过调用接口 DescribeInstances ，取返回信息中的 InstanceId 获取实例ID。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 密钥对ID列表，每次请求批量密钥对的上限为100。密钥对ID形如：skey-11112222。

可以通过以下方式获取可用的密钥ID：
通过登录控制台查询密钥ID。
通过调用接口 DescribeKeyPairs ，取返回信息中的 KeyId 获取密钥对ID。
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * 是否对运行中的实例选择强制关机。建议对运行中的实例先手动关机，然后再解绑密钥。取值范围：
TRUE：表示在正常关机失败后进行强制关机。
FALSE：表示在正常关机失败后不进行强制关机。

默认取值：FALSE。
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_
