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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTANDARDRULEDETAILINFOLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTANDARDRULEDETAILINFOLISTREQUEST_H_

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
                * DescribeStandardRuleDetailInfoList请求参数结构体
                */
                class DescribeStandardRuleDetailInfoListRequest : public AbstractModel
                {
                public:
                    DescribeStandardRuleDetailInfoListRequest();
                    ~DescribeStandardRuleDetailInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间、项目id
                     * @return ProjectId 空间、项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置空间、项目id
                     * @param _projectId 空间、项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取标准分类11编码映射 12数据过滤 13字符串转换 14数据元定义 15正则表达 16术语词典
                     * @return Type 标准分类11编码映射 12数据过滤 13字符串转换 14数据元定义 15正则表达 16术语词典
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置标准分类11编码映射 12数据过滤 13字符串转换 14数据元定义 15正则表达 16术语词典
                     * @param _type 标准分类11编码映射 12数据过滤 13字符串转换 14数据元定义 15正则表达 16术语词典
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 空间、项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 标准分类11编码映射 12数据过滤 13字符串转换 14数据元定义 15正则表达 16术语词典
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBESTANDARDRULEDETAILINFOLISTREQUEST_H_
