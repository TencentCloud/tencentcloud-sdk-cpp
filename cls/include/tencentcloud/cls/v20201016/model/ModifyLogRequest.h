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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYLOGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyLog请求参数结构体
                */
                class ModifyLogRequest : public AbstractModel
                {
                public:
                    ModifyLogRequest();
                    ~ModifyLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志主题id</p>
                     * @return TopicId <p>日志主题id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题id</p>
                     * @param _topicId <p>日志主题id</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>检索时间范围-开始时间</p><p>单位：ms</p>
                     * @return From <p>检索时间范围-开始时间</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置<p>检索时间范围-开始时间</p><p>单位：ms</p>
                     * @param _from <p>检索时间范围-开始时间</p><p>单位：ms</p>
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>检索时间范围-结束时间</p><p>单位：ms</p>
                     * @return To <p>检索时间范围-结束时间</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置<p>检索时间范围-结束时间</p><p>单位：ms</p>
                     * @param _to <p>检索时间范围-结束时间</p><p>单位：ms</p>
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取<p>日志检索条件，仅支持 CQL 语法，不支持 Lucene 语法</p><p>对符合检索条件的日志进行修改</p>
                     * @return QueryString <p>日志检索条件，仅支持 CQL 语法，不支持 Lucene 语法</p><p>对符合检索条件的日志进行修改</p>
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置<p>日志检索条件，仅支持 CQL 语法，不支持 Lucene 语法</p><p>对符合检索条件的日志进行修改</p>
                     * @param _queryString <p>日志检索条件，仅支持 CQL 语法，不支持 Lucene 语法</p><p>对符合检索条件的日志进行修改</p>
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取<p>修改模式</p><p>枚举值：</p><ul><li>PARTIAL： 只修改指定的日志字段</li><li>REPLACE： 整体替换原有日志（不包含预置字段及元数据字段）</li></ul>
                     * @return ModifyMode <p>修改模式</p><p>枚举值：</p><ul><li>PARTIAL： 只修改指定的日志字段</li><li>REPLACE： 整体替换原有日志（不包含预置字段及元数据字段）</li></ul>
                     * 
                     */
                    std::string GetModifyMode() const;

                    /**
                     * 设置<p>修改模式</p><p>枚举值：</p><ul><li>PARTIAL： 只修改指定的日志字段</li><li>REPLACE： 整体替换原有日志（不包含预置字段及元数据字段）</li></ul>
                     * @param _modifyMode <p>修改模式</p><p>枚举值：</p><ul><li>PARTIAL： 只修改指定的日志字段</li><li>REPLACE： 整体替换原有日志（不包含预置字段及元数据字段）</li></ul>
                     * 
                     */
                    void SetModifyMode(const std::string& _modifyMode);

                    /**
                     * 判断参数 ModifyMode 是否已赋值
                     * @return ModifyMode 是否已赋值
                     * 
                     */
                    bool ModifyModeHasBeenSet() const;

                    /**
                     * 获取<p>修改内容</p><p>不支持修改预置字段(__FILENAME__、__SOURCE__等，但不包括__CONTENT__)及元数据字段(__TAG__开头的字段)</p>
                     * @return ModifyContent <p>修改内容</p><p>不支持修改预置字段(__FILENAME__、__SOURCE__等，但不包括__CONTENT__)及元数据字段(__TAG__开头的字段)</p>
                     * 
                     */
                    std::string GetModifyContent() const;

                    /**
                     * 设置<p>修改内容</p><p>不支持修改预置字段(__FILENAME__、__SOURCE__等，但不包括__CONTENT__)及元数据字段(__TAG__开头的字段)</p>
                     * @param _modifyContent <p>修改内容</p><p>不支持修改预置字段(__FILENAME__、__SOURCE__等，但不包括__CONTENT__)及元数据字段(__TAG__开头的字段)</p>
                     * 
                     */
                    void SetModifyContent(const std::string& _modifyContent);

                    /**
                     * 判断参数 ModifyContent 是否已赋值
                     * @return ModifyContent 是否已赋值
                     * 
                     */
                    bool ModifyContentHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>检索时间范围-开始时间</p><p>单位：ms</p>
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>检索时间范围-结束时间</p><p>单位：ms</p>
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * <p>日志检索条件，仅支持 CQL 语法，不支持 Lucene 语法</p><p>对符合检索条件的日志进行修改</p>
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * <p>修改模式</p><p>枚举值：</p><ul><li>PARTIAL： 只修改指定的日志字段</li><li>REPLACE： 整体替换原有日志（不包含预置字段及元数据字段）</li></ul>
                     */
                    std::string m_modifyMode;
                    bool m_modifyModeHasBeenSet;

                    /**
                     * <p>修改内容</p><p>不支持修改预置字段(__FILENAME__、__SOURCE__等，但不包括__CONTENT__)及元数据字段(__TAG__开头的字段)</p>
                     */
                    std::string m_modifyContent;
                    bool m_modifyContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYLOGREQUEST_H_
