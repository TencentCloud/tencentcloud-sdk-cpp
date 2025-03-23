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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTTEMPLATE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeContent.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 通知内容模板信息
                */
                class NoticeContentTemplate : public AbstractModel
                {
                public:
                    NoticeContentTemplate();
                    ~NoticeContentTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知内容模板ID。
                     * @return NoticeContentId 通知内容模板ID。
                     * 
                     */
                    std::string GetNoticeContentId() const;

                    /**
                     * 设置通知内容模板ID。
                     * @param _noticeContentId 通知内容模板ID。
                     * 
                     */
                    void SetNoticeContentId(const std::string& _noticeContentId);

                    /**
                     * 判断参数 NoticeContentId 是否已赋值
                     * @return NoticeContentId 是否已赋值
                     * 
                     */
                    bool NoticeContentIdHasBeenSet() const;

                    /**
                     * 获取通知内容模板名称
                     * @return Name 通知内容模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置通知内容模板名称
                     * @param _name 通知内容模板名称
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
                     * 获取语言类型。

0： 中文
1： 英文
                     * @return Type 语言类型。

0： 中文
1： 英文
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置语言类型。

0： 中文
1： 英文
                     * @param _type 语言类型。

0： 中文
1： 英文
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
                     * 获取通知内容模板信息。
                     * @return NoticeContents 通知内容模板信息。
                     * 
                     */
                    std::vector<NoticeContent> GetNoticeContents() const;

                    /**
                     * 设置通知内容模板信息。
                     * @param _noticeContents 通知内容模板信息。
                     * 
                     */
                    void SetNoticeContents(const std::vector<NoticeContent>& _noticeContents);

                    /**
                     * 判断参数 NoticeContents 是否已赋值
                     * @return NoticeContents 是否已赋值
                     * 
                     */
                    bool NoticeContentsHasBeenSet() const;

                    /**
                     * 获取通知内容模板标记。

0： 用户自定义
1： 系统内置
                     * @return Flag 通知内容模板标记。

0： 用户自定义
1： 系统内置
                     * 
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置通知内容模板标记。

0： 用户自定义
1： 系统内置
                     * @param _flag 通知内容模板标记。

0： 用户自定义
1： 系统内置
                     * 
                     */
                    void SetFlag(const uint64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取创建者主账号。
                     * @return Uin 创建者主账号。
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置创建者主账号。
                     * @param _uin 创建者主账号。
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取创建/修改者子账号。
                     * @return SubUin 创建/修改者子账号。
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置创建/修改者子账号。
                     * @param _subUin 创建/修改者子账号。
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取创建时间 秒级时间戳。
                     * @return CreateTime 创建时间 秒级时间戳。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间 秒级时间戳。
                     * @param _createTime 创建时间 秒级时间戳。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间 秒级时间戳。
                     * @return UpdateTime 更新时间 秒级时间戳。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间 秒级时间戳。
                     * @param _updateTime 更新时间 秒级时间戳。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 通知内容模板ID。
                     */
                    std::string m_noticeContentId;
                    bool m_noticeContentIdHasBeenSet;

                    /**
                     * 通知内容模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 语言类型。

0： 中文
1： 英文
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 通知内容模板信息。
                     */
                    std::vector<NoticeContent> m_noticeContents;
                    bool m_noticeContentsHasBeenSet;

                    /**
                     * 通知内容模板标记。

0： 用户自定义
1： 系统内置
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 创建者主账号。
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 创建/修改者子账号。
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 创建时间 秒级时间戳。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间 秒级时间戳。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTTEMPLATE_H_
