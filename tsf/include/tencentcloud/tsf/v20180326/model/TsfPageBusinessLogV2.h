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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEBUSINESSLOGV2_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEBUSINESSLOGV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/BusinessLogV2.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 业务日志列表
                */
                class TsfPageBusinessLogV2 : public AbstractModel
                {
                public:
                    TsfPageBusinessLogV2();
                    ~TsfPageBusinessLogV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>总条数</p>
                     * @return TotalCount <p>总条数</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>总条数</p>
                     * @param _totalCount <p>总条数</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>业务日志列表</p>
                     * @return Content <p>业务日志列表</p>
                     * 
                     */
                    std::vector<BusinessLogV2> GetContent() const;

                    /**
                     * 设置<p>业务日志列表</p>
                     * @param _content <p>业务日志列表</p>
                     * 
                     */
                    void SetContent(const std::vector<BusinessLogV2>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>游标ID</p>
                     * @return ScrollId <p>游标ID</p>
                     * 
                     */
                    std::string GetScrollId() const;

                    /**
                     * 设置<p>游标ID</p>
                     * @param _scrollId <p>游标ID</p>
                     * 
                     */
                    void SetScrollId(const std::string& _scrollId);

                    /**
                     * 判断参数 ScrollId 是否已赋值
                     * @return ScrollId 是否已赋值
                     * 
                     */
                    bool ScrollIdHasBeenSet() const;

                    /**
                     * 获取<p>查询状态，SUCCESS：查询成功完成，ERROR_RANGE_EXCEED：查询范围过大异常，ERROR_COMPLEX_CONDITION：查询条件复杂异常，ERROR_OTHER_CAUSE：其他异常</p>
                     * @return Status <p>查询状态，SUCCESS：查询成功完成，ERROR_RANGE_EXCEED：查询范围过大异常，ERROR_COMPLEX_CONDITION：查询条件复杂异常，ERROR_OTHER_CAUSE：其他异常</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>查询状态，SUCCESS：查询成功完成，ERROR_RANGE_EXCEED：查询范围过大异常，ERROR_COMPLEX_CONDITION：查询条件复杂异常，ERROR_OTHER_CAUSE：其他异常</p>
                     * @param _status <p>查询状态，SUCCESS：查询成功完成，ERROR_RANGE_EXCEED：查询范围过大异常，ERROR_COMPLEX_CONDITION：查询条件复杂异常，ERROR_OTHER_CAUSE：其他异常</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>查询es时，使用searchAfter返回的游标</p>
                     * @return SearchAfter <p>查询es时，使用searchAfter返回的游标</p>
                     * 
                     */
                    std::vector<std::string> GetSearchAfter() const;

                    /**
                     * 设置<p>查询es时，使用searchAfter返回的游标</p>
                     * @param _searchAfter <p>查询es时，使用searchAfter返回的游标</p>
                     * 
                     */
                    void SetSearchAfter(const std::vector<std::string>& _searchAfter);

                    /**
                     * 判断参数 SearchAfter 是否已赋值
                     * @return SearchAfter 是否已赋值
                     * 
                     */
                    bool SearchAfterHasBeenSet() const;

                    /**
                     * 获取<p>是否压缩</p>
                     * @return Compressed <p>是否压缩</p>
                     * 
                     */
                    bool GetCompressed() const;

                    /**
                     * 设置<p>是否压缩</p>
                     * @param _compressed <p>是否压缩</p>
                     * 
                     */
                    void SetCompressed(const bool& _compressed);

                    /**
                     * 判断参数 Compressed 是否已赋值
                     * @return Compressed 是否已赋值
                     * 
                     */
                    bool CompressedHasBeenSet() const;

                private:

                    /**
                     * <p>总条数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>业务日志列表</p>
                     */
                    std::vector<BusinessLogV2> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>游标ID</p>
                     */
                    std::string m_scrollId;
                    bool m_scrollIdHasBeenSet;

                    /**
                     * <p>查询状态，SUCCESS：查询成功完成，ERROR_RANGE_EXCEED：查询范围过大异常，ERROR_COMPLEX_CONDITION：查询条件复杂异常，ERROR_OTHER_CAUSE：其他异常</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>查询es时，使用searchAfter返回的游标</p>
                     */
                    std::vector<std::string> m_searchAfter;
                    bool m_searchAfterHasBeenSet;

                    /**
                     * <p>是否压缩</p>
                     */
                    bool m_compressed;
                    bool m_compressedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEBUSINESSLOGV2_H_
