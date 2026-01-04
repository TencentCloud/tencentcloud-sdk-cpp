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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ATTACHINSINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ATTACHINSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 关联实例信息
                */
                class AttachInsInfo : public AbstractModel
                {
                public:
                    AttachInsInfo();
                    ~AttachInsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例对象可以是cvm类型:ins-ad21xuds1形式;路由表类型:rtb-da12daxd形式;vpc类型:vpc-1dxdad2d形式
                     * @return InsId 实例对象可以是cvm类型:ins-ad21xuds1形式;路由表类型:rtb-da12daxd形式;vpc类型:vpc-1dxdad2d形式
                     * 
                     */
                    std::string GetInsId() const;

                    /**
                     * 设置实例对象可以是cvm类型:ins-ad21xuds1形式;路由表类型:rtb-da12daxd形式;vpc类型:vpc-1dxdad2d形式
                     * @param _insId 实例对象可以是cvm类型:ins-ad21xuds1形式;路由表类型:rtb-da12daxd形式;vpc类型:vpc-1dxdad2d形式
                     * 
                     */
                    void SetInsId(const std::string& _insId);

                    /**
                     * 判断参数 InsId 是否已赋值
                     * @return InsId 是否已赋值
                     * 
                     */
                    bool InsIdHasBeenSet() const;

                    /**
                     * 获取实例对象名称
                     * @return InsName 实例对象名称
                     * 
                     */
                    std::string GetInsName() const;

                    /**
                     * 设置实例对象名称
                     * @param _insName 实例对象名称
                     * 
                     */
                    void SetInsName(const std::string& _insName);

                    /**
                     * 判断参数 InsName 是否已赋值
                     * @return InsName 是否已赋值
                     * 
                     */
                    bool InsNameHasBeenSet() const;

                    /**
                     * 获取实例的cidr
                     * @return Cidr 实例的cidr
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置实例的cidr
                     * @param _cidr 实例的cidr
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                private:

                    /**
                     * 实例对象可以是cvm类型:ins-ad21xuds1形式;路由表类型:rtb-da12daxd形式;vpc类型:vpc-1dxdad2d形式
                     */
                    std::string m_insId;
                    bool m_insIdHasBeenSet;

                    /**
                     * 实例对象名称
                     */
                    std::string m_insName;
                    bool m_insNameHasBeenSet;

                    /**
                     * 实例的cidr
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ATTACHINSINFO_H_
