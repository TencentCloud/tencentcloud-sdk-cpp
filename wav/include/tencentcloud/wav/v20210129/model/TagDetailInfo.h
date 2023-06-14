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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_TAGDETAILINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_TAGDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 标签详细信息
                */
                class TagDetailInfo : public AbstractModel
                {
                public:
                    TagDetailInfo();
                    ~TagDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签名称
                     * @return TagName 标签名称
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置标签名称
                     * @param _tagName 标签名称
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取标签业务ID
                     * @return BizTagId 标签业务ID
                     * 
                     */
                    std::string GetBizTagId() const;

                    /**
                     * 设置标签业务ID
                     * @param _bizTagId 标签业务ID
                     * 
                     */
                    void SetBizTagId(const std::string& _bizTagId);

                    /**
                     * 判断参数 BizTagId 是否已赋值
                     * @return BizTagId 是否已赋值
                     * 
                     */
                    bool BizTagIdHasBeenSet() const;

                    /**
                     * 获取企微标签ID
                     * @return TagId 企微标签ID
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置企微标签ID
                     * @param _tagId 企微标签ID
                     * 
                     */
                    void SetTagId(const std::string& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取标签排序的次序值，sort值大的排序靠前。有效的值范围是[0, 2^32)
                     * @return Sort 标签排序的次序值，sort值大的排序靠前。有效的值范围是[0, 2^32)
                     * 
                     */
                    uint64_t GetSort() const;

                    /**
                     * 设置标签排序的次序值，sort值大的排序靠前。有效的值范围是[0, 2^32)
                     * @param _sort 标签排序的次序值，sort值大的排序靠前。有效的值范围是[0, 2^32)
                     * 
                     */
                    void SetSort(const uint64_t& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取标签创建时间,单位为秒
                     * @return CreateTime 标签创建时间,单位为秒
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置标签创建时间,单位为秒
                     * @param _createTime 标签创建时间,单位为秒
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 标签名称
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 标签业务ID
                     */
                    std::string m_bizTagId;
                    bool m_bizTagIdHasBeenSet;

                    /**
                     * 企微标签ID
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * 标签排序的次序值，sort值大的排序靠前。有效的值范围是[0, 2^32)
                     */
                    uint64_t m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 标签创建时间,单位为秒
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_TAGDETAILINFO_H_
