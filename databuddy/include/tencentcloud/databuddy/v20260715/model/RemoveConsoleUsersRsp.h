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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_REMOVECONSOLEUSERSRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_REMOVECONSOLEUSERSRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/CommonFailItem.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 批量移除控制台用户响应
                */
                class RemoveConsoleUsersRsp : public AbstractModel
                {
                public:
                    RemoveConsoleUsersRsp();
                    ~RemoveConsoleUsersRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>请求已完成处理；即使部分失败也为 true，逐个结果以 SuccessUins/FailItems 为准</p>
                     * @return Status <p>请求已完成处理；即使部分失败也为 true，逐个结果以 SuccessUins/FailItems 为准</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>请求已完成处理；即使部分失败也为 true，逐个结果以 SuccessUins/FailItems 为准</p>
                     * @param _status <p>请求已完成处理；即使部分失败也为 true，逐个结果以 SuccessUins/FailItems 为准</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>删除成功的用户 UIN 列表</p>
                     * @return SuccessUins <p>删除成功的用户 UIN 列表</p>
                     * 
                     */
                    std::vector<std::string> GetSuccessUins() const;

                    /**
                     * 设置<p>删除成功的用户 UIN 列表</p>
                     * @param _successUins <p>删除成功的用户 UIN 列表</p>
                     * 
                     */
                    void SetSuccessUins(const std::vector<std::string>& _successUins);

                    /**
                     * 判断参数 SuccessUins 是否已赋值
                     * @return SuccessUins 是否已赋值
                     * 
                     */
                    bool SuccessUinsHasBeenSet() const;

                    /**
                     * 获取<p>失败项列表（Item 为用户 UIN，FailReason 为失败原因）</p>
                     * @return FailItems <p>失败项列表（Item 为用户 UIN，FailReason 为失败原因）</p>
                     * 
                     */
                    std::vector<CommonFailItem> GetFailItems() const;

                    /**
                     * 设置<p>失败项列表（Item 为用户 UIN，FailReason 为失败原因）</p>
                     * @param _failItems <p>失败项列表（Item 为用户 UIN，FailReason 为失败原因）</p>
                     * 
                     */
                    void SetFailItems(const std::vector<CommonFailItem>& _failItems);

                    /**
                     * 判断参数 FailItems 是否已赋值
                     * @return FailItems 是否已赋值
                     * 
                     */
                    bool FailItemsHasBeenSet() const;

                private:

                    /**
                     * <p>请求已完成处理；即使部分失败也为 true，逐个结果以 SuccessUins/FailItems 为准</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>删除成功的用户 UIN 列表</p>
                     */
                    std::vector<std::string> m_successUins;
                    bool m_successUinsHasBeenSet;

                    /**
                     * <p>失败项列表（Item 为用户 UIN，FailReason 为失败原因）</p>
                     */
                    std::vector<CommonFailItem> m_failItems;
                    bool m_failItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_REMOVECONSOLEUSERSRSP_H_
