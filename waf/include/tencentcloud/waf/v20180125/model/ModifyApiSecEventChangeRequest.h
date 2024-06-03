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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPISECEVENTCHANGEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPISECEVENTCHANGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiSecKey.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyApiSecEventChange请求参数结构体
                */
                class ModifyApiSecEventChangeRequest : public AbstractModel
                {
                public:
                    ModifyApiSecEventChangeRequest();
                    ~ModifyApiSecEventChangeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取变更状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * @return Mode 变更状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置变更状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * @param _mode 变更状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取处理人
                     * @return UserName 处理人
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置处理人
                     * @param _userName 处理人
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取备注，有长度显示1k
                     * @return Remark 备注，有长度显示1k
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，有长度显示1k
                     * @param _remark 备注，有长度显示1k
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取批量操作的事件列表
                     * @return EventIdList 批量操作的事件列表
                     * 
                     */
                    std::vector<std::string> GetEventIdList() const;

                    /**
                     * 设置批量操作的事件列表
                     * @param _eventIdList 批量操作的事件列表
                     * 
                     */
                    void SetEventIdList(const std::vector<std::string>& _eventIdList);

                    /**
                     * 判断参数 EventIdList 是否已赋值
                     * @return EventIdList 是否已赋值
                     * 
                     */
                    bool EventIdListHasBeenSet() const;

                    /**
                     * 获取批量操作的api列表
                     * @return ApiNameList 批量操作的api列表
                     * 
                     */
                    std::vector<ApiSecKey> GetApiNameList() const;

                    /**
                     * 设置批量操作的api列表
                     * @param _apiNameList 批量操作的api列表
                     * 
                     */
                    void SetApiNameList(const std::vector<ApiSecKey>& _apiNameList);

                    /**
                     * 判断参数 ApiNameList 是否已赋值
                     * @return ApiNameList 是否已赋值
                     * 
                     */
                    bool ApiNameListHasBeenSet() const;

                    /**
                     * 获取判断是否删除，包括删除事件和删除资产
                     * @return IsDelete 判断是否删除，包括删除事件和删除资产
                     * 
                     */
                    bool GetIsDelete() const;

                    /**
                     * 设置判断是否删除，包括删除事件和删除资产
                     * @param _isDelete 判断是否删除，包括删除事件和删除资产
                     * 
                     */
                    void SetIsDelete(const bool& _isDelete);

                    /**
                     * 判断参数 IsDelete 是否已赋值
                     * @return IsDelete 是否已赋值
                     * 
                     */
                    bool IsDeleteHasBeenSet() const;

                    /**
                     * 获取判断是否是更新api的备注，更新api备注的时候，为true
                     * @return UpdateApiRemark 判断是否是更新api的备注，更新api备注的时候，为true
                     * 
                     */
                    bool GetUpdateApiRemark() const;

                    /**
                     * 设置判断是否是更新api的备注，更新api备注的时候，为true
                     * @param _updateApiRemark 判断是否是更新api的备注，更新api备注的时候，为true
                     * 
                     */
                    void SetUpdateApiRemark(const bool& _updateApiRemark);

                    /**
                     * 判断参数 UpdateApiRemark 是否已赋值
                     * @return UpdateApiRemark 是否已赋值
                     * 
                     */
                    bool UpdateApiRemarkHasBeenSet() const;

                private:

                    /**
                     * 变更状态，1:新发现，2，确认中，3，已确认，4，已下线，5，已忽略
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 处理人
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 备注，有长度显示1k
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 批量操作的事件列表
                     */
                    std::vector<std::string> m_eventIdList;
                    bool m_eventIdListHasBeenSet;

                    /**
                     * 批量操作的api列表
                     */
                    std::vector<ApiSecKey> m_apiNameList;
                    bool m_apiNameListHasBeenSet;

                    /**
                     * 判断是否删除，包括删除事件和删除资产
                     */
                    bool m_isDelete;
                    bool m_isDeleteHasBeenSet;

                    /**
                     * 判断是否是更新api的备注，更新api备注的时候，为true
                     */
                    bool m_updateApiRemark;
                    bool m_updateApiRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPISECEVENTCHANGEREQUEST_H_
