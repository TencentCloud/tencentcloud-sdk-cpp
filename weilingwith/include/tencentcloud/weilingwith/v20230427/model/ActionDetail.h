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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ACTIONDETAIL_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ACTIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/LinkRule.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 详细动作信息
                */
                class ActionDetail : public AbstractModel
                {
                public:
                    ActionDetail();
                    ~ActionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作id
                     * @return Id 动作id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置动作id
                     * @param _id 动作id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取动作名称
                     * @return Name 动作名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置动作名称
                     * @param _name 动作名称
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
                     * 获取动作类型
                     * @return ActionType 动作类型
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置动作类型
                     * @param _actionType 动作类型
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取动作说明
                     * @return ActionDesc 动作说明
                     * 
                     */
                    std::string GetActionDesc() const;

                    /**
                     * 设置动作说明
                     * @param _actionDesc 动作说明
                     * 
                     */
                    void SetActionDesc(const std::string& _actionDesc);

                    /**
                     * 判断参数 ActionDesc 是否已赋值
                     * @return ActionDesc 是否已赋值
                     * 
                     */
                    bool ActionDescHasBeenSet() const;

                    /**
                     * 获取消息类型，orgin/custom/model
                     * @return MsgType 消息类型，orgin/custom/model
                     * 
                     */
                    std::string GetMsgType() const;

                    /**
                     * 设置消息类型，orgin/custom/model
                     * @param _msgType 消息类型，orgin/custom/model
                     * 
                     */
                    void SetMsgType(const std::string& _msgType);

                    /**
                     * 判断参数 MsgType 是否已赋值
                     * @return MsgType 是否已赋值
                     * 
                     */
                    bool MsgTypeHasBeenSet() const;

                    /**
                     * 获取消息内容,有效值为x-json:后的字段
                     * @return MsgContent 消息内容,有效值为x-json:后的字段
                     * 
                     */
                    std::string GetMsgContent() const;

                    /**
                     * 设置消息内容,有效值为x-json:后的字段
                     * @param _msgContent 消息内容,有效值为x-json:后的字段
                     * 
                     */
                    void SetMsgContent(const std::string& _msgContent);

                    /**
                     * 判断参数 MsgContent 是否已赋值
                     * @return MsgContent 是否已赋值
                     * 
                     */
                    bool MsgContentHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取设备唯一标识
                     * @return WID 设备唯一标识
                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备唯一标识
                     * @param _wID 设备唯一标识
                     * 
                     */
                    void SetWID(const std::string& _wID);

                    /**
                     * 判断参数 WID 是否已赋值
                     * @return WID 是否已赋值
                     * 
                     */
                    bool WIDHasBeenSet() const;

                    /**
                     * 获取关联故障列表
                     * @return LinkRuleSet 关联故障列表
                     * 
                     */
                    std::vector<LinkRule> GetLinkRuleSet() const;

                    /**
                     * 设置关联故障列表
                     * @param _linkRuleSet 关联故障列表
                     * 
                     */
                    void SetLinkRuleSet(const std::vector<LinkRule>& _linkRuleSet);

                    /**
                     * 判断参数 LinkRuleSet 是否已赋值
                     * @return LinkRuleSet 是否已赋值
                     * 
                     */
                    bool LinkRuleSetHasBeenSet() const;

                    /**
                     * 获取动作下沉配置,有效值为x-json:后的字段
                     * @return SinkConfig 动作下沉配置,有效值为x-json:后的字段
                     * 
                     */
                    std::string GetSinkConfig() const;

                    /**
                     * 设置动作下沉配置,有效值为x-json:后的字段
                     * @param _sinkConfig 动作下沉配置,有效值为x-json:后的字段
                     * 
                     */
                    void SetSinkConfig(const std::string& _sinkConfig);

                    /**
                     * 判断参数 SinkConfig 是否已赋值
                     * @return SinkConfig 是否已赋值
                     * 
                     */
                    bool SinkConfigHasBeenSet() const;

                private:

                    /**
                     * 动作id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 动作名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 动作类型
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 动作说明
                     */
                    std::string m_actionDesc;
                    bool m_actionDescHasBeenSet;

                    /**
                     * 消息类型，orgin/custom/model
                     */
                    std::string m_msgType;
                    bool m_msgTypeHasBeenSet;

                    /**
                     * 消息内容,有效值为x-json:后的字段
                     */
                    std::string m_msgContent;
                    bool m_msgContentHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 设备唯一标识
                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                    /**
                     * 关联故障列表
                     */
                    std::vector<LinkRule> m_linkRuleSet;
                    bool m_linkRuleSetHasBeenSet;

                    /**
                     * 动作下沉配置,有效值为x-json:后的字段
                     */
                    std::string m_sinkConfig;
                    bool m_sinkConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ACTIONDETAIL_H_
