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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BROADCASTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BROADCASTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 安全播报文章详情
                */
                class BroadcastInfo : public AbstractModel
                {
                public:
                    BroadcastInfo();
                    ~BroadcastInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文章名字
                     * @return Title 文章名字
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置文章名字
                     * @param _title 文章名字
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取跳转位置：0=不跳转，1=文件查杀，2=漏洞扫描，3=安全基线
                     * @return GotoType 跳转位置：0=不跳转，1=文件查杀，2=漏洞扫描，3=安全基线
                     * 
                     */
                    uint64_t GetGotoType() const;

                    /**
                     * 设置跳转位置：0=不跳转，1=文件查杀，2=漏洞扫描，3=安全基线
                     * @param _gotoType 跳转位置：0=不跳转，1=文件查杀，2=漏洞扫描，3=安全基线
                     * 
                     */
                    void SetGotoType(const uint64_t& _gotoType);

                    /**
                     * 判断参数 GotoType 是否已赋值
                     * @return GotoType 是否已赋值
                     * 
                     */
                    bool GotoTypeHasBeenSet() const;

                    /**
                     * 获取副标题
                     * @return Subtitle 副标题
                     * 
                     */
                    std::string GetSubtitle() const;

                    /**
                     * 设置副标题
                     * @param _subtitle 副标题
                     * 
                     */
                    void SetSubtitle(const std::string& _subtitle);

                    /**
                     * 判断参数 Subtitle 是否已赋值
                     * @return Subtitle 是否已赋值
                     * 
                     */
                    bool SubtitleHasBeenSet() const;

                    /**
                     * 获取发布时间
                     * @return CreateTime 发布时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置发布时间
                     * @param _createTime 发布时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取富文本内容信息
                     * @return Content 富文本内容信息
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置富文本内容信息
                     * @param _content 富文本内容信息
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
                     * 获取文章唯一Id
                     * @return Id 文章唯一Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置文章唯一Id
                     * @param _id 文章唯一Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取类型：0=紧急通知，1=功能更新，2=行业荣誉，3=版本发布
                     * @return Type 类型：0=紧急通知，1=功能更新，2=行业荣誉，3=版本发布
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置类型：0=紧急通知，1=功能更新，2=行业荣誉，3=版本发布
                     * @param _type 类型：0=紧急通知，1=功能更新，2=行业荣誉，3=版本发布
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 文章名字
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 跳转位置：0=不跳转，1=文件查杀，2=漏洞扫描，3=安全基线
                     */
                    uint64_t m_gotoType;
                    bool m_gotoTypeHasBeenSet;

                    /**
                     * 副标题
                     */
                    std::string m_subtitle;
                    bool m_subtitleHasBeenSet;

                    /**
                     * 发布时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 富文本内容信息
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 文章唯一Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 类型：0=紧急通知，1=功能更新，2=行业荣誉，3=版本发布
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BROADCASTINFO_H_
