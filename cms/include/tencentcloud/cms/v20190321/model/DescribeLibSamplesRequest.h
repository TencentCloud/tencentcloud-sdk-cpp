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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBELIBSAMPLESREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBELIBSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * DescribeLibSamples请求参数结构体
                */
                class DescribeLibSamplesRequest : public AbstractModel
                {
                public:
                    DescribeLibSamplesRequest();
                    ~DescribeLibSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单页条数，最大为100条
                     * @return Limit 单页条数，最大为100条
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页条数，最大为100条
                     * @param _limit 单页条数，最大为100条
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
                     * 获取条数偏移量
                     * @return Offset 条数偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置条数偏移量
                     * @param _offset 条数偏移量
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
                     * 获取词库ID
                     * @return LibID 词库ID
                     * 
                     */
                    std::string GetLibID() const;

                    /**
                     * 设置词库ID
                     * @param _libID 词库ID
                     * 
                     */
                    void SetLibID(const std::string& _libID);

                    /**
                     * 判断参数 LibID 是否已赋值
                     * @return LibID 是否已赋值
                     * 
                     */
                    bool LibIDHasBeenSet() const;

                    /**
                     * 获取词内容过滤
                     * @return Content 词内容过滤
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置词内容过滤
                     * @param _content 词内容过滤
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取违规类型列表过滤
                     * @return EvilTypeList 违规类型列表过滤
                     * 
                     */
                    std::vector<int64_t> GetEvilTypeList() const;

                    /**
                     * 设置违规类型列表过滤
                     * @param _evilTypeList 违规类型列表过滤
                     * 
                     */
                    void SetEvilTypeList(const std::vector<int64_t>& _evilTypeList);

                    /**
                     * 判断参数 EvilTypeList 是否已赋值
                     * @return EvilTypeList 是否已赋值
                     * 
                     */
                    bool EvilTypeListHasBeenSet() const;

                    /**
                     * 获取样本词ID列表过滤
                     * @return SampleIDs 样本词ID列表过滤
                     * 
                     */
                    std::vector<std::string> GetSampleIDs() const;

                    /**
                     * 设置样本词ID列表过滤
                     * @param _sampleIDs 样本词ID列表过滤
                     * 
                     */
                    void SetSampleIDs(const std::vector<std::string>& _sampleIDs);

                    /**
                     * 判断参数 SampleIDs 是否已赋值
                     * @return SampleIDs 是否已赋值
                     * 
                     */
                    bool SampleIDsHasBeenSet() const;

                private:

                    /**
                     * 单页条数，最大为100条
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 条数偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 词库ID
                     */
                    std::string m_libID;
                    bool m_libIDHasBeenSet;

                    /**
                     * 词内容过滤
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 违规类型列表过滤
                     */
                    std::vector<int64_t> m_evilTypeList;
                    bool m_evilTypeListHasBeenSet;

                    /**
                     * 样本词ID列表过滤
                     */
                    std::vector<std::string> m_sampleIDs;
                    bool m_sampleIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBELIBSAMPLESREQUEST_H_
