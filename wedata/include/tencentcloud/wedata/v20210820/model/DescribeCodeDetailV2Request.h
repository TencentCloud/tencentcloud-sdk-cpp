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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECODEDETAILV2REQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECODEDETAILV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeCodeDetailV2请求参数结构体
                */
                class DescribeCodeDetailV2Request : public AbstractModel
                {
                public:
                    DescribeCodeDetailV2Request();
                    ~DescribeCodeDetailV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件或任务ID
                     * @return Id 文件或任务ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置文件或任务ID
                     * @param _id 文件或任务ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取文件或任务名称
                     * @return Name 文件或任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件或任务名称
                     * @param _name 文件或任务名称
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
                     * 获取文件或任务类型
                     * @return Type 文件或任务类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件或任务类型
                     * @param _type 文件或任务类型
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
                     * 文件或任务ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 文件或任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件或任务类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECODEDETAILV2REQUEST_H_
