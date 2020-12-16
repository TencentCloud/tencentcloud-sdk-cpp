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

#ifndef TENCENTCLOUD_IMS_V20200713_MODEL_IMSDETAIL_H_
#define TENCENTCLOUD_IMS_V20200713_MODEL_IMSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * 机器审核详情列表数据项
                */
                class ImsDetail : public AbstractModel
                {
                public:
                    ImsDetail();
                    ~ImsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本内容
                     * @return Content 文本内容
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文本内容
                     * @param Content 文本内容
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取数据方式， 0：我审，1：人审
                     * @return DataSource 数据方式， 0：我审，1：人审
                     */
                    int64_t GetDataSource() const;

                    /**
                     * 设置数据方式， 0：我审，1：人审
                     * @param DataSource 数据方式， 0：我审，1：人审
                     */
                    void SetDataSource(const int64_t& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取最后更新时间
                     * @return UpdateTime 最后更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后更新时间
                     * @param UpdateTime 最后更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取机器审核结果code 100 正常, 20001 政治 20002 色情 20006 涉毒违法 20007 谩骂 24001 暴恐 21000 综合 20105 广告引流 20103 性感
                     * @return EvilType 机器审核结果code 100 正常, 20001 政治 20002 色情 20006 涉毒违法 20007 谩骂 24001 暴恐 21000 综合 20105 广告引流 20103 性感
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置机器审核结果code 100 正常, 20001 政治 20002 色情 20006 涉毒违法 20007 谩骂 24001 暴恐 21000 综合 20105 广告引流 20103 性感
                     * @param EvilType 机器审核结果code 100 正常, 20001 政治 20002 色情 20006 涉毒违法 20007 谩骂 24001 暴恐 21000 综合 20105 广告引流 20103 性感
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取机器审核时间
                     * @return ModerationTime 机器审核时间
                     */
                    std::string GetModerationTime() const;

                    /**
                     * 设置机器审核时间
                     * @param ModerationTime 机器审核时间
                     */
                    void SetModerationTime(const std::string& _moderationTime);

                    /**
                     * 判断参数 ModerationTime 是否已赋值
                     * @return ModerationTime 是否已赋值
                     */
                    bool ModerationTimeHasBeenSet() const;

                    /**
                     * 获取最后更新人
                     * @return UpdateUser 最后更新人
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置最后更新人
                     * @param UpdateUser 最后更新人
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取内容RequestId
                     * @return ContentId 内容RequestId
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置内容RequestId
                     * @param ContentId 内容RequestId
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取自主审核结果
                     * @return OperEvilType 自主审核结果
                     */
                    int64_t GetOperEvilType() const;

                    /**
                     * 设置自主审核结果
                     * @param OperEvilType 自主审核结果
                     */
                    void SetOperEvilType(const int64_t& _operEvilType);

                    /**
                     * 判断参数 OperEvilType 是否已赋值
                     * @return OperEvilType 是否已赋值
                     */
                    bool OperEvilTypeHasBeenSet() const;

                private:

                    /**
                     * 文本内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 数据方式， 0：我审，1：人审
                     */
                    int64_t m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 机器审核结果code 100 正常, 20001 政治 20002 色情 20006 涉毒违法 20007 谩骂 24001 暴恐 21000 综合 20105 广告引流 20103 性感
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 机器审核时间
                     */
                    std::string m_moderationTime;
                    bool m_moderationTimeHasBeenSet;

                    /**
                     * 最后更新人
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * 内容RequestId
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * 自主审核结果
                     */
                    int64_t m_operEvilType;
                    bool m_operEvilTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_MODEL_IMSDETAIL_H_
