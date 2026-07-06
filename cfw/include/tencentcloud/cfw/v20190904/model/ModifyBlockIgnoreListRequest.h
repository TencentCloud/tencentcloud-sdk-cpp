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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/IocListData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyBlockIgnoreList请求参数结构体
                */
                class ModifyBlockIgnoreListRequest : public AbstractModel
                {
                public:
                    ModifyBlockIgnoreListRequest();
                    ~ModifyBlockIgnoreListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>1封禁列表 2 放通列表</p>
                     * @return RuleType <p>1封禁列表 2 放通列表</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>1封禁列表 2 放通列表</p>
                     * @param _ruleType <p>1封禁列表 2 放通列表</p>
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>IP、Domain二选一（注：封禁列表，只能填写IP），不能同时为空</p>
                     * @return IOC <p>IP、Domain二选一（注：封禁列表，只能填写IP），不能同时为空</p>
                     * 
                     */
                    std::vector<IocListData> GetIOC() const;

                    /**
                     * 设置<p>IP、Domain二选一（注：封禁列表，只能填写IP），不能同时为空</p>
                     * @param _iOC <p>IP、Domain二选一（注：封禁列表，只能填写IP），不能同时为空</p>
                     * 
                     */
                    void SetIOC(const std::vector<IocListData>& _iOC);

                    /**
                     * 判断参数 IOC 是否已赋值
                     * @return IOC 是否已赋值
                     * 
                     */
                    bool IOCHasBeenSet() const;

                    /**
                     * 获取<p>可选值：delete（删除）、edit（编辑）、add（添加）  其他值无效</p>
                     * @return IocAction <p>可选值：delete（删除）、edit（编辑）、add（添加）  其他值无效</p>
                     * 
                     */
                    std::string GetIocAction() const;

                    /**
                     * 设置<p>可选值：delete（删除）、edit（编辑）、add（添加）  其他值无效</p>
                     * @param _iocAction <p>可选值：delete（删除）、edit（编辑）、add（添加）  其他值无效</p>
                     * 
                     */
                    void SetIocAction(const std::string& _iocAction);

                    /**
                     * 判断参数 IocAction 是否已赋值
                     * @return IocAction 是否已赋值
                     * 
                     */
                    bool IocActionHasBeenSet() const;

                    /**
                     * 获取<p>时间格式：yyyy-MM-dd HH:mm:ss，IocAction 为edit或add时必填</p>
                     * @return StartTime <p>时间格式：yyyy-MM-dd HH:mm:ss，IocAction 为edit或add时必填</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>时间格式：yyyy-MM-dd HH:mm:ss，IocAction 为edit或add时必填</p>
                     * @param _startTime <p>时间格式：yyyy-MM-dd HH:mm:ss，IocAction 为edit或add时必填</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>时间格式：yyyy-MM-dd HH:mm:ss，IocAction 为edit或add时必填，必须大于当前时间且大于StartTime</p>
                     * @return EndTime <p>时间格式：yyyy-MM-dd HH:mm:ss，IocAction 为edit或add时必填，必须大于当前时间且大于StartTime</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>时间格式：yyyy-MM-dd HH:mm:ss，IocAction 为edit或add时必填，必须大于当前时间且大于StartTime</p>
                     * @param _endTime <p>时间格式：yyyy-MM-dd HH:mm:ss，IocAction 为edit或add时必填，必须大于当前时间且大于StartTime</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否来自微信</p><p>取值范围：[0, 1]</p>
                     * @return IsFromWeChat <p>是否来自微信</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    int64_t GetIsFromWeChat() const;

                    /**
                     * 设置<p>是否来自微信</p><p>取值范围：[0, 1]</p>
                     * @param _isFromWeChat <p>是否来自微信</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    void SetIsFromWeChat(const int64_t& _isFromWeChat);

                    /**
                     * 判断参数 IsFromWeChat 是否已赋值
                     * @return IsFromWeChat 是否已赋值
                     * 
                     */
                    bool IsFromWeChatHasBeenSet() const;

                private:

                    /**
                     * <p>1封禁列表 2 放通列表</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>IP、Domain二选一（注：封禁列表，只能填写IP），不能同时为空</p>
                     */
                    std::vector<IocListData> m_iOC;
                    bool m_iOCHasBeenSet;

                    /**
                     * <p>可选值：delete（删除）、edit（编辑）、add（添加）  其他值无效</p>
                     */
                    std::string m_iocAction;
                    bool m_iocActionHasBeenSet;

                    /**
                     * <p>时间格式：yyyy-MM-dd HH:mm:ss，IocAction 为edit或add时必填</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>时间格式：yyyy-MM-dd HH:mm:ss，IocAction 为edit或add时必填，必须大于当前时间且大于StartTime</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>是否来自微信</p><p>取值范围：[0, 1]</p>
                     */
                    int64_t m_isFromWeChat;
                    bool m_isFromWeChatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORELISTREQUEST_H_
