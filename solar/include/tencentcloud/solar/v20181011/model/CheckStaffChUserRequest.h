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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_CHECKSTAFFCHUSERREQUEST_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_CHECKSTAFFCHUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * CheckStaffChUser请求参数结构体
                */
                class CheckStaffChUserRequest : public AbstractModel
                {
                public:
                    CheckStaffChUserRequest();
                    ~CheckStaffChUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取员工ID
                     * @return UserId 员工ID
                     * 
                     */
                    std::vector<std::string> GetUserId() const;

                    /**
                     * 设置员工ID
                     * @param _userId 员工ID
                     * 
                     */
                    void SetUserId(const std::vector<std::string>& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取渠道状态：checkpass审核通过, checkreject审核拒绝, enableoperate启用, stopoperate停用
                     * @return OperateType 渠道状态：checkpass审核通过, checkreject审核拒绝, enableoperate启用, stopoperate停用
                     * 
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置渠道状态：checkpass审核通过, checkreject审核拒绝, enableoperate启用, stopoperate停用
                     * @param _operateType 渠道状态：checkpass审核通过, checkreject审核拒绝, enableoperate启用, stopoperate停用
                     * 
                     */
                    void SetOperateType(const std::string& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                private:

                    /**
                     * 员工ID
                     */
                    std::vector<std::string> m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 渠道状态：checkpass审核通过, checkreject审核拒绝, enableoperate启用, stopoperate停用
                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_CHECKSTAFFCHUSERREQUEST_H_
