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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPCENDPOINTSERVICEUSER_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPCENDPOINTSERVICEUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 终端节点服务的服务白名单对象详情。
                */
                class VpcEndPointServiceUser : public AbstractModel
                {
                public:
                    VpcEndPointServiceUser();
                    ~VpcEndPointServiceUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AppId。可通过登录 腾讯云账号中心控制台 获取。
                     * @return Owner AppId。可通过登录 腾讯云账号中心控制台 获取。
                     * 
                     */
                    uint64_t GetOwner() const;

                    /**
                     * 设置AppId。可通过登录 腾讯云账号中心控制台 获取。
                     * @param _owner AppId。可通过登录 腾讯云账号中心控制台 获取。
                     * 
                     */
                    void SetOwner(const uint64_t& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取用户Uin。可通过登录 腾讯云账号中心控制台 获取。
                     * @return UserUin 用户Uin。可通过登录 腾讯云账号中心控制台 获取。
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置用户Uin。可通过登录 腾讯云账号中心控制台 获取。
                     * @param _userUin 用户Uin。可通过登录 腾讯云账号中心控制台 获取。
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取描述信息。
                     * @return Description 描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
                     * @param _description 描述信息。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间。格式为字符串YYYY-MM-DD HH:MM:SS。
                     * @return CreateTime 创建时间。格式为字符串YYYY-MM-DD HH:MM:SS。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。格式为字符串YYYY-MM-DD HH:MM:SS。
                     * @param _createTime 创建时间。格式为字符串YYYY-MM-DD HH:MM:SS。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。

                     * @return EndPointServiceId 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。

                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。

                     * @param _endPointServiceId 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。

                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                private:

                    /**
                     * AppId。可通过登录 腾讯云账号中心控制台 获取。
                     */
                    uint64_t m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 用户Uin。可通过登录 腾讯云账号中心控制台 获取。
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间。格式为字符串YYYY-MM-DD HH:MM:SS。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。

                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPCENDPOINTSERVICEUSER_H_
