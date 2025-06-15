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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEINFOREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * DescribeDeviceInfo请求参数结构体
                */
                class DescribeDeviceInfoRequest : public AbstractModel
                {
                public:
                    DescribeDeviceInfoRequest();
                    ~DescribeDeviceInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端id
                     * @return Mid 终端id
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置终端id
                     * @param _mid 终端id
                     * 
                     */
                    void SetMid(const std::string& _mid);

                    /**
                     * 判断参数 Mid 是否已赋值
                     * @return Mid 是否已赋值
                     * 
                     */
                    bool MidHasBeenSet() const;

                    /**
                     * 获取查询类型  process_list network_list service_list
                     * @return Type 查询类型  process_list network_list service_list
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置查询类型  process_list network_list service_list
                     * @param _type 查询类型  process_list network_list service_list
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 终端id
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * 查询类型  process_list network_list service_list
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEINFOREQUEST_H_
