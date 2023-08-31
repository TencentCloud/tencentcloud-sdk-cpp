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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SESSIONITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SESSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * session定义
                */
                class SessionItem : public AbstractModel
                {
                public:
                    SessionItem();
                    ~SessionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配类型
                     * @return Category 匹配类型
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置匹配类型
                     * @param _category 匹配类型
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取起始模式
                     * @return KeyOrStartMat 起始模式
                     * 
                     */
                    std::string GetKeyOrStartMat() const;

                    /**
                     * 设置起始模式
                     * @param _keyOrStartMat 起始模式
                     * 
                     */
                    void SetKeyOrStartMat(const std::string& _keyOrStartMat);

                    /**
                     * 判断参数 KeyOrStartMat 是否已赋值
                     * @return KeyOrStartMat 是否已赋值
                     * 
                     */
                    bool KeyOrStartMatHasBeenSet() const;

                    /**
                     * 获取结束模式
                     * @return EndMat 结束模式
                     * 
                     */
                    std::string GetEndMat() const;

                    /**
                     * 设置结束模式
                     * @param _endMat 结束模式
                     * 
                     */
                    void SetEndMat(const std::string& _endMat);

                    /**
                     * 判断参数 EndMat 是否已赋值
                     * @return EndMat 是否已赋值
                     * 
                     */
                    bool EndMatHasBeenSet() const;

                    /**
                     * 获取起始偏移
                     * @return StartOffset 起始偏移
                     * 
                     */
                    std::string GetStartOffset() const;

                    /**
                     * 设置起始偏移
                     * @param _startOffset 起始偏移
                     * 
                     */
                    void SetStartOffset(const std::string& _startOffset);

                    /**
                     * 判断参数 StartOffset 是否已赋值
                     * @return StartOffset 是否已赋值
                     * 
                     */
                    bool StartOffsetHasBeenSet() const;

                    /**
                     * 获取结束偏移
                     * @return EndOffset 结束偏移
                     * 
                     */
                    std::string GetEndOffset() const;

                    /**
                     * 设置结束偏移
                     * @param _endOffset 结束偏移
                     * 
                     */
                    void SetEndOffset(const std::string& _endOffset);

                    /**
                     * 判断参数 EndOffset 是否已赋值
                     * @return EndOffset 是否已赋值
                     * 
                     */
                    bool EndOffsetHasBeenSet() const;

                    /**
                     * 获取数据源
                     * @return Source 数据源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置数据源
                     * @param _source 数据源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取更新时间戳
                     * @return TsVersion 更新时间戳
                     * 
                     */
                    std::string GetTsVersion() const;

                    /**
                     * 设置更新时间戳
                     * @param _tsVersion 更新时间戳
                     * 
                     */
                    void SetTsVersion(const std::string& _tsVersion);

                    /**
                     * 判断参数 TsVersion 是否已赋值
                     * @return TsVersion 是否已赋值
                     * 
                     */
                    bool TsVersionHasBeenSet() const;

                private:

                    /**
                     * 匹配类型
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 起始模式
                     */
                    std::string m_keyOrStartMat;
                    bool m_keyOrStartMatHasBeenSet;

                    /**
                     * 结束模式
                     */
                    std::string m_endMat;
                    bool m_endMatHasBeenSet;

                    /**
                     * 起始偏移
                     */
                    std::string m_startOffset;
                    bool m_startOffsetHasBeenSet;

                    /**
                     * 结束偏移
                     */
                    std::string m_endOffset;
                    bool m_endOffsetHasBeenSet;

                    /**
                     * 数据源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 更新时间戳
                     */
                    std::string m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SESSIONITEM_H_
