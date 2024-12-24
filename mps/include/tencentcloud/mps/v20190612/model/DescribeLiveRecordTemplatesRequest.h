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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeLiveRecordTemplates请求参数结构体
                */
                class DescribeLiveRecordTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeLiveRecordTemplatesRequest();
                    ~DescribeLiveRecordTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取录制模板唯一标识过滤条件，数组长度限制：100。
                     * @return Definitions 录制模板唯一标识过滤条件，数组长度限制：100。
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置录制模板唯一标识过滤条件，数组长度限制：100。
                     * @param _definitions 录制模板唯一标识过滤条件，数组长度限制：100。
                     * 
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param _offset 分页偏移量，默认值：0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：10，最大值：100。
                     * @return Limit 返回记录条数，默认值：10，最大值：100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：10，最大值：100。
                     * @param _limit 返回记录条数，默认值：10，最大值：100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取模板类型过滤条件，不填则返回所有，可选值：
* Preset：系统预置模板；
* Custom：用户自定义模板。
                     * @return Type 模板类型过滤条件，不填则返回所有，可选值：
* Preset：系统预置模板；
* Custom：用户自定义模板。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型过滤条件，不填则返回所有，可选值：
* Preset：系统预置模板；
* Custom：用户自定义模板。
                     * @param _type 模板类型过滤条件，不填则返回所有，可选值：
* Preset：系统预置模板；
* Custom：用户自定义模板。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取录制模板标识过滤条件，长度限制：64 个字符。
                     * @return Name 录制模板标识过滤条件，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置录制模板标识过滤条件，长度限制：64 个字符。
                     * @param _name 录制模板标识过滤条件，长度限制：64 个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 录制模板唯一标识过滤条件，数组长度限制：100。
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：10，最大值：100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 模板类型过滤条件，不填则返回所有，可选值：
* Preset：系统预置模板；
* Custom：用户自定义模板。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 录制模板标识过滤条件，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBELIVERECORDTEMPLATESREQUEST_H_
