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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERGLOBALENCRYPTIONREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERGLOBALENCRYPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyClusterGlobalEncryption请求参数结构体
                */
                class ModifyClusterGlobalEncryptionRequest : public AbstractModel
                {
                public:
                    ModifyClusterGlobalEncryptionRequest();
                    ~ModifyClusterGlobalEncryptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取开启或关闭全局加密
                     * @return IsOpenGlobalEncryption 开启或关闭全局加密
                     * 
                     */
                    bool GetIsOpenGlobalEncryption() const;

                    /**
                     * 设置开启或关闭全局加密
                     * @param _isOpenGlobalEncryption 开启或关闭全局加密
                     * 
                     */
                    void SetIsOpenGlobalEncryption(const bool& _isOpenGlobalEncryption);

                    /**
                     * 判断参数 IsOpenGlobalEncryption 是否已赋值
                     * @return IsOpenGlobalEncryption 是否已赋值
                     * 
                     */
                    bool IsOpenGlobalEncryptionHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 开启或关闭全局加密
                     */
                    bool m_isOpenGlobalEncryption;
                    bool m_isOpenGlobalEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERGLOBALENCRYPTIONREQUEST_H_
