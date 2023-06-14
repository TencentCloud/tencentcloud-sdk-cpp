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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_VERSIONFLOWINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_VERSIONFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/ObjectKV.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 版本流量信息
                */
                class VersionFlowInfo : public AbstractModel
                {
                public:
                    VersionFlowInfo();
                    ~VersionFlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本名
                     * @return VersionName 版本名
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名
                     * @param _versionName 版本名
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
                     * 获取是否默认版本
                     * @return IsDefaultPriority 是否默认版本
                     * 
                     */
                    bool GetIsDefaultPriority() const;

                    /**
                     * 设置是否默认版本
                     * @param _isDefaultPriority 是否默认版本
                     * 
                     */
                    void SetIsDefaultPriority(const bool& _isDefaultPriority);

                    /**
                     * 判断参数 IsDefaultPriority 是否已赋值
                     * @return IsDefaultPriority 是否已赋值
                     * 
                     */
                    bool IsDefaultPriorityHasBeenSet() const;

                    /**
                     * 获取流量比例
                     * @return FlowRatio 流量比例
                     * 
                     */
                    int64_t GetFlowRatio() const;

                    /**
                     * 设置流量比例
                     * @param _flowRatio 流量比例
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
                     * 获取测试KV值
                     * @return UrlParam 测试KV值
                     * 
                     */
                    ObjectKV GetUrlParam() const;

                    /**
                     * 设置测试KV值
                     * @param _urlParam 测试KV值
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
                     * 获取权重
                     * @return Priority 权重
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置权重
                     * @param _priority 权重
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 版本名
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 是否默认版本
                     */
                    bool m_isDefaultPriority;
                    bool m_isDefaultPriorityHasBeenSet;

                    /**
                     * 流量比例
                     */
                    int64_t m_flowRatio;
                    bool m_flowRatioHasBeenSet;

                    /**
                     * 测试KV值
                     */
                    ObjectKV m_urlParam;
                    bool m_urlParamHasBeenSet;

                    /**
                     * 权重
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_VERSIONFLOWINFO_H_
