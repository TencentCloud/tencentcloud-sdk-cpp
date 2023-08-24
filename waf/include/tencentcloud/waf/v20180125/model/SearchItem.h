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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHITEM_H_

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
                * 接入列表查询复杂条件
                */
                class SearchItem : public AbstractModel
                {
                public:
                    SearchItem();
                    ~SearchItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志开关
                     * @return ClsStatus 日志开关
                     * 
                     */
                    std::string GetClsStatus() const;

                    /**
                     * 设置日志开关
                     * @param _clsStatus 日志开关
                     * 
                     */
                    void SetClsStatus(const std::string& _clsStatus);

                    /**
                     * 判断参数 ClsStatus 是否已赋值
                     * @return ClsStatus 是否已赋值
                     * 
                     */
                    bool ClsStatusHasBeenSet() const;

                    /**
                     * 获取waf开关
                     * @return Status waf开关
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置waf开关
                     * @param _status waf开关
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取流量模式
                     * @return FlowMode 流量模式
                     * 
                     */
                    std::string GetFlowMode() const;

                    /**
                     * 设置流量模式
                     * @param _flowMode 流量模式
                     * 
                     */
                    void SetFlowMode(const std::string& _flowMode);

                    /**
                     * 判断参数 FlowMode 是否已赋值
                     * @return FlowMode 是否已赋值
                     * 
                     */
                    bool FlowModeHasBeenSet() const;

                private:

                    /**
                     * 日志开关
                     */
                    std::string m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * waf开关
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 流量模式
                     */
                    std::string m_flowMode;
                    bool m_flowModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SEARCHITEM_H_
