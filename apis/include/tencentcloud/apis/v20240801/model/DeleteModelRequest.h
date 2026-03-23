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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DELETEMODELREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DELETEMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DeleteModel请求参数结构体
                */
                class DeleteModelRequest : public AbstractModel
                {
                public:
                    DeleteModelRequest();
                    ~DeleteModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例
                     * @return InstanceID 实例
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例
                     * @param _instanceID 实例
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取模型ID数组
                     * @return IDs 模型ID数组
                     * 
                     */
                    std::vector<std::string> GetIDs() const;

                    /**
                     * 设置模型ID数组
                     * @param _iDs 模型ID数组
                     * 
                     */
                    void SetIDs(const std::vector<std::string>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                private:

                    /**
                     * 实例
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 模型ID数组
                     */
                    std::vector<std::string> m_iDs;
                    bool m_iDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DELETEMODELREQUEST_H_
