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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DELETECLOUDRUNVERSIONSREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DELETECLOUDRUNVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/SimpleVersion.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DeleteCloudRunVersions请求参数结构体
                */
                class DeleteCloudRunVersionsRequest : public AbstractModel
                {
                public:
                    DeleteCloudRunVersionsRequest();
                    ~DeleteCloudRunVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 Id
                     * @return EnvId 环境 Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 Id
                     * @param _envId 环境 Id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取是否删除服务，只有最后一个版本的时候才生效
                     * @return IsDeleteServer 是否删除服务，只有最后一个版本的时候才生效
                     * 
                     */
                    bool GetIsDeleteServer() const;

                    /**
                     * 设置是否删除服务，只有最后一个版本的时候才生效
                     * @param _isDeleteServer 是否删除服务，只有最后一个版本的时候才生效
                     * 
                     */
                    void SetIsDeleteServer(const bool& _isDeleteServer);

                    /**
                     * 判断参数 IsDeleteServer 是否已赋值
                     * @return IsDeleteServer 是否已赋值
                     * 
                     */
                    bool IsDeleteServerHasBeenSet() const;

                    /**
                     * 获取只有删除服务的时候，才生效
                     * @return IsDeleteImage 只有删除服务的时候，才生效
                     * 
                     */
                    bool GetIsDeleteImage() const;

                    /**
                     * 设置只有删除服务的时候，才生效
                     * @param _isDeleteImage 只有删除服务的时候，才生效
                     * 
                     */
                    void SetIsDeleteImage(const bool& _isDeleteImage);

                    /**
                     * 判断参数 IsDeleteImage 是否已赋值
                     * @return IsDeleteImage 是否已赋值
                     * 
                     */
                    bool IsDeleteImageHasBeenSet() const;

                    /**
                     * 获取删除版本的信息
                     * @return SimpleVersions 删除版本的信息
                     * 
                     */
                    std::vector<SimpleVersion> GetSimpleVersions() const;

                    /**
                     * 设置删除版本的信息
                     * @param _simpleVersions 删除版本的信息
                     * 
                     */
                    void SetSimpleVersions(const std::vector<SimpleVersion>& _simpleVersions);

                    /**
                     * 判断参数 SimpleVersions 是否已赋值
                     * @return SimpleVersions 是否已赋值
                     * 
                     */
                    bool SimpleVersionsHasBeenSet() const;

                    /**
                     * 获取操作备注
                     * @return OperatorRemark 操作备注
                     * 
                     */
                    std::string GetOperatorRemark() const;

                    /**
                     * 设置操作备注
                     * @param _operatorRemark 操作备注
                     * 
                     */
                    void SetOperatorRemark(const std::string& _operatorRemark);

                    /**
                     * 判断参数 OperatorRemark 是否已赋值
                     * @return OperatorRemark 是否已赋值
                     * 
                     */
                    bool OperatorRemarkHasBeenSet() const;

                private:

                    /**
                     * 环境 Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 是否删除服务，只有最后一个版本的时候才生效
                     */
                    bool m_isDeleteServer;
                    bool m_isDeleteServerHasBeenSet;

                    /**
                     * 只有删除服务的时候，才生效
                     */
                    bool m_isDeleteImage;
                    bool m_isDeleteImageHasBeenSet;

                    /**
                     * 删除版本的信息
                     */
                    std::vector<SimpleVersion> m_simpleVersions;
                    bool m_simpleVersionsHasBeenSet;

                    /**
                     * 操作备注
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DELETECLOUDRUNVERSIONSREQUEST_H_
