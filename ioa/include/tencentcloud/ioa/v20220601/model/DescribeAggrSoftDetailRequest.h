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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTDETAILREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTDETAILREQUEST_H_

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
                * DescribeAggrSoftDetail请求参数结构体
                */
                class DescribeAggrSoftDetailRequest : public AbstractModel
                {
                public:
                    DescribeAggrSoftDetailRequest();
                    ~DescribeAggrSoftDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取软件名称
                     * @return Name 软件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置软件名称
                     * @param _name 软件名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取操作系统
                     * @return OsType 操作系统
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置操作系统
                     * @param _osType 操作系统
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                private:

                    /**
                     * 软件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 操作系统
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTDETAILREQUEST_H_
