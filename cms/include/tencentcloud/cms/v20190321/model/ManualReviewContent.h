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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_MANUALREVIEWCONTENT_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_MANUALREVIEWCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/User.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 人审审核数据相关信息
                */
                class ManualReviewContent : public AbstractModel
                {
                public:
                    ManualReviewContent();
                    ~ManualReviewContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审核批次号
                     * @return BatchId 审核批次号
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置审核批次号
                     * @param BatchId 审核批次号
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取审核内容
                     * @return Content 审核内容
                     */
                    std::string GetContent() const;

                    /**
                     * 设置审核内容
                     * @param Content 审核内容
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取消息Id
                     * @return ContentId 消息Id
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置消息Id
                     * @param ContentId 消息Id
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取审核内容类型 1 图片 2 视频 3 文本 4 音频
                     * @return ContentType 审核内容类型 1 图片 2 视频 3 文本 4 音频
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置审核内容类型 1 图片 2 视频 3 文本 4 音频
                     * @param ContentType 审核内容类型 1 图片 2 视频 3 文本 4 音频
                     */
                    void SetContentType(const int64_t& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取用户信息
                     * @return UserInfo 用户信息
                     */
                    User GetUserInfo() const;

                    /**
                     * 设置用户信息
                     * @param UserInfo 用户信息
                     */
                    void SetUserInfo(const User& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取机器审核类型，与腾讯机器审核定义一致
100 正常
20001 政治
20002 色情
20006 违法
20007 谩骂
24001 暴恐
20105 广告
20103 性感
                     * @return AutoDetailCode 机器审核类型，与腾讯机器审核定义一致
100 正常
20001 政治
20002 色情
20006 违法
20007 谩骂
24001 暴恐
20105 广告
20103 性感
                     */
                    int64_t GetAutoDetailCode() const;

                    /**
                     * 设置机器审核类型，与腾讯机器审核定义一致
100 正常
20001 政治
20002 色情
20006 违法
20007 谩骂
24001 暴恐
20105 广告
20103 性感
                     * @param AutoDetailCode 机器审核类型，与腾讯机器审核定义一致
100 正常
20001 政治
20002 色情
20006 违法
20007 谩骂
24001 暴恐
20105 广告
20103 性感
                     */
                    void SetAutoDetailCode(const int64_t& _autoDetailCode);

                    /**
                     * 判断参数 AutoDetailCode 是否已赋值
                     * @return AutoDetailCode 是否已赋值
                     */
                    bool AutoDetailCodeHasBeenSet() const;

                    /**
                     * 获取机器审核结果 0 放过 1 拦截
                     * @return AutoResult 机器审核结果 0 放过 1 拦截
                     */
                    int64_t GetAutoResult() const;

                    /**
                     * 设置机器审核结果 0 放过 1 拦截
                     * @param AutoResult 机器审核结果 0 放过 1 拦截
                     */
                    void SetAutoResult(const int64_t& _autoResult);

                    /**
                     * 判断参数 AutoResult 是否已赋值
                     * @return AutoResult 是否已赋值
                     */
                    bool AutoResultHasBeenSet() const;

                    /**
                     * 获取回调信息标识，回传数据时原样返回
                     * @return CallBackInfo 回调信息标识，回传数据时原样返回
                     */
                    std::string GetCallBackInfo() const;

                    /**
                     * 设置回调信息标识，回传数据时原样返回
                     * @param CallBackInfo 回调信息标识，回传数据时原样返回
                     */
                    void SetCallBackInfo(const std::string& _callBackInfo);

                    /**
                     * 判断参数 CallBackInfo 是否已赋值
                     * @return CallBackInfo 是否已赋值
                     */
                    bool CallBackInfoHasBeenSet() const;

                    /**
                     * 获取创建时间 格式“2020-01-01 00:00:12”
                     * @return CreateTime 创建时间 格式“2020-01-01 00:00:12”
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间 格式“2020-01-01 00:00:12”
                     * @param CreateTime 创建时间 格式“2020-01-01 00:00:12”
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取审核优先级，可选值 [1,2,3,4]，其中 1 最高，4 最低
                     * @return Priority 审核优先级，可选值 [1,2,3,4]，其中 1 最高，4 最低
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置审核优先级，可选值 [1,2,3,4]，其中 1 最高，4 最低
                     * @param Priority 审核优先级，可选值 [1,2,3,4]，其中 1 最高，4 最低
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取标题
                     * @return Title 标题
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
                     * @param Title 标题
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     */
                    bool TitleHasBeenSet() const;

                private:

                    /**
                     * 审核批次号
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 审核内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 消息Id
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * 审核内容类型 1 图片 2 视频 3 文本 4 音频
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 用户信息
                     */
                    User m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 机器审核类型，与腾讯机器审核定义一致
100 正常
20001 政治
20002 色情
20006 违法
20007 谩骂
24001 暴恐
20105 广告
20103 性感
                     */
                    int64_t m_autoDetailCode;
                    bool m_autoDetailCodeHasBeenSet;

                    /**
                     * 机器审核结果 0 放过 1 拦截
                     */
                    int64_t m_autoResult;
                    bool m_autoResultHasBeenSet;

                    /**
                     * 回调信息标识，回传数据时原样返回
                     */
                    std::string m_callBackInfo;
                    bool m_callBackInfoHasBeenSet;

                    /**
                     * 创建时间 格式“2020-01-01 00:00:12”
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 审核优先级，可选值 [1,2,3,4]，其中 1 最高，4 最低
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_MANUALREVIEWCONTENT_H_
