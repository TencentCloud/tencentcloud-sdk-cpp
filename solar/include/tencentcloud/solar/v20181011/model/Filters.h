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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_FILTERS_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_FILTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 可见范围过滤参数
                */
                class Filters : public AbstractModel
                {
                public:
                    Filters();
                    ~Filters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤类型, 0: 默认(可见部门+自创) 1: 自创 2: 指定部门(部门在可见范围内)
                     * @return Type 过滤类型, 0: 默认(可见部门+自创) 1: 自创 2: 指定部门(部门在可见范围内)
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置过滤类型, 0: 默认(可见部门+自创) 1: 自创 2: 指定部门(部门在可见范围内)
                     * @param _type 过滤类型, 0: 默认(可见部门+自创) 1: 自创 2: 指定部门(部门在可见范围内)
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取指定部门Id, 类型2使用
                     * @return DeptIds 指定部门Id, 类型2使用
                     * 
                     */
                    std::vector<std::string> GetDeptIds() const;

                    /**
                     * 设置指定部门Id, 类型2使用
                     * @param _deptIds 指定部门Id, 类型2使用
                     * 
                     */
                    void SetDeptIds(const std::vector<std::string>& _deptIds);

                    /**
                     * 判断参数 DeptIds 是否已赋值
                     * @return DeptIds 是否已赋值
                     * 
                     */
                    bool DeptIdsHasBeenSet() const;

                    /**
                     * 获取用户Id列表
                     * @return UserIds 用户Id列表
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置用户Id列表
                     * @param _userIds 用户Id列表
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * 过滤类型, 0: 默认(可见部门+自创) 1: 自创 2: 指定部门(部门在可见范围内)
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 指定部门Id, 类型2使用
                     */
                    std::vector<std::string> m_deptIds;
                    bool m_deptIdsHasBeenSet;

                    /**
                     * 用户Id列表
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_FILTERS_H_
