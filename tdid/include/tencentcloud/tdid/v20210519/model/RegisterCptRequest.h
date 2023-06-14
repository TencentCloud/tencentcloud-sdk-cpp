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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERCPTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERCPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * RegisterCpt请求参数结构体
                */
                class RegisterCptRequest : public AbstractModel
                {
                public:
                    RegisterCptRequest();
                    ~RegisterCptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取群组ID
                     * @return GroupId 群组ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param _groupId 群组ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param _clusterId 网络ID
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
                     * 获取CptJson的具体信息
                     * @return CptJson CptJson的具体信息
                     * 
                     */
                    std::string GetCptJson() const;

                    /**
                     * 设置CptJson的具体信息
                     * @param _cptJson CptJson的具体信息
                     * 
                     */
                    void SetCptJson(const std::string& _cptJson);

                    /**
                     * 判断参数 CptJson 是否已赋值
                     * @return CptJson 是否已赋值
                     * 
                     */
                    bool CptJsonHasBeenSet() const;

                    /**
                     * 获取cptId 不填默认自增
                     * @return CptId cptId 不填默认自增
                     * 
                     */
                    uint64_t GetCptId() const;

                    /**
                     * 设置cptId 不填默认自增
                     * @param _cptId cptId 不填默认自增
                     * 
                     */
                    void SetCptId(const uint64_t& _cptId);

                    /**
                     * 判断参数 CptId 是否已赋值
                     * @return CptId 是否已赋值
                     * 
                     */
                    bool CptIdHasBeenSet() const;

                private:

                    /**
                     * 群组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * CptJson的具体信息
                     */
                    std::string m_cptJson;
                    bool m_cptJsonHasBeenSet;

                    /**
                     * cptId 不填默认自增
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERCPTREQUEST_H_
