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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNVERSIONFLOWITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNVERSIONFLOWITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/ObjectKV.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 版本流量占比
                */
                class CloudBaseRunVersionFlowItem : public AbstractModel
                {
                public:
                    CloudBaseRunVersionFlowItem();
                    ~CloudBaseRunVersionFlowItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本名称
                     * @return VersionName 版本名称
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名称
                     * @param _versionName 版本名称
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取流量占比
                     * @return FlowRatio 流量占比
                     * 
                     */
                    int64_t GetFlowRatio() const;

                    /**
                     * 设置流量占比
                     * @param _flowRatio 流量占比
                     * 
                     */
                    void SetFlowRatio(const int64_t& _flowRatio);

                    /**
                     * 判断参数 FlowRatio 是否已赋值
                     * @return FlowRatio 是否已赋值
                     * 
                     */
                    bool FlowRatioHasBeenSet() const;

                    /**
                     * 获取流量参数键值对（URL参数/HEADERS参数）
                     * @return UrlParam 流量参数键值对（URL参数/HEADERS参数）
                     * 
                     */
                    ObjectKV GetUrlParam() const;

                    /**
                     * 设置流量参数键值对（URL参数/HEADERS参数）
                     * @param _urlParam 流量参数键值对（URL参数/HEADERS参数）
                     * 
                     */
                    void SetUrlParam(const ObjectKV& _urlParam);

                    /**
                     * 判断参数 UrlParam 是否已赋值
                     * @return UrlParam 是否已赋值
                     * 
                     */
                    bool UrlParamHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取是否是默认兜底版本
                     * @return IsDefaultPriority 是否是默认兜底版本
                     * 
                     */
                    bool GetIsDefaultPriority() const;

                    /**
                     * 设置是否是默认兜底版本
                     * @param _isDefaultPriority 是否是默认兜底版本
                     * 
                     */
                    void SetIsDefaultPriority(const bool& _isDefaultPriority);

                    /**
                     * 判断参数 IsDefaultPriority 是否已赋值
                     * @return IsDefaultPriority 是否已赋值
                     * 
                     */
                    bool IsDefaultPriorityHasBeenSet() const;

                private:

                    /**
                     * 版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 流量占比
                     */
                    int64_t m_flowRatio;
                    bool m_flowRatioHasBeenSet;

                    /**
                     * 流量参数键值对（URL参数/HEADERS参数）
                     */
                    ObjectKV m_urlParam;
                    bool m_urlParamHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 是否是默认兜底版本
                     */
                    bool m_isDefaultPriority;
                    bool m_isDefaultPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNVERSIONFLOWITEM_H_
