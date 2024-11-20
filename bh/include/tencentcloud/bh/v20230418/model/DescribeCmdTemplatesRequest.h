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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBECMDTEMPLATESREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBECMDTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeCmdTemplates请求参数结构体
                */
                class DescribeCmdTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeCmdTemplatesRequest();
                    ~DescribeCmdTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命令模板ID集合，非必需
                     * @return IdSet 命令模板ID集合，非必需
                     * 
                     */
                    std::vector<uint64_t> GetIdSet() const;

                    /**
                     * 设置命令模板ID集合，非必需
                     * @param _idSet 命令模板ID集合，非必需
                     * 
                     */
                    void SetIdSet(const std::vector<uint64_t>& _idSet);

                    /**
                     * 判断参数 IdSet 是否已赋值
                     * @return IdSet 是否已赋值
                     * 
                     */
                    bool IdSetHasBeenSet() const;

                    /**
                     * 获取命令模板名，模糊查询，最大长度64字符
                     * @return Name 命令模板名，模糊查询，最大长度64字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置命令模板名，模糊查询，最大长度64字符
                     * @param _name 命令模板名，模糊查询，最大长度64字符
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
                     * 获取命令模板类型 1-内置模板 2-自定义模板
                     * @return Type 命令模板类型 1-内置模板 2-自定义模板
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置命令模板类型 1-内置模板 2-自定义模板
                     * @param _type 命令模板类型 1-内置模板 2-自定义模板
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分页偏移位置，默认值为0
                     * @return Offset 分页偏移位置，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置，默认值为0
                     * @param _offset 分页偏移位置，默认值为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条目数量，默认20
                     * @return Limit 每页条目数量，默认20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数量，默认20
                     * @param _limit 每页条目数量，默认20
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 命令模板ID集合，非必需
                     */
                    std::vector<uint64_t> m_idSet;
                    bool m_idSetHasBeenSet;

                    /**
                     * 命令模板名，模糊查询，最大长度64字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命令模板类型 1-内置模板 2-自定义模板
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分页偏移位置，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条目数量，默认20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBECMDTEMPLATESREQUEST_H_
