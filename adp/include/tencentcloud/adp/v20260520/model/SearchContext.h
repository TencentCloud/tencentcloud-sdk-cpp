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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHCONTEXT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 检索请求上下文信息
                */
                class SearchContext : public AbstractModel
                {
                public:
                    SearchContext();
                    ~SearchContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>请求来源<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CALL_SOURCE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>CALL_SOURCE_RAG</td><td>1</td><td>标准模式</td></tr><tr><td>CALL_SOURCE_WORKFLOW</td><td>2</td><td>工作流</td></tr><tr><td>CALL_SOURCE_PLUGIN</td><td>3</td><td>插件</td></tr><tr><td>CALL_SOURCE_OPENCLAW</td><td>4</td><td>openclaw</td></tr><tr><td>CALL_SOURCE_RECALL_TEST</td><td>5</td><td>召回测试</td></tr><tr><td>CALL_SOURCE_RECALL_TEST_DIFF</td><td>6</td><td>召回测试在对比的场景，同样需要触发检索接口。区别这种case前端不需要更新最新配置。因为对比1，2，3 可能最后保存的是2</td></tr></tbody></table></p>
                     * @return CallSource <p>请求来源<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CALL_SOURCE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>CALL_SOURCE_RAG</td><td>1</td><td>标准模式</td></tr><tr><td>CALL_SOURCE_WORKFLOW</td><td>2</td><td>工作流</td></tr><tr><td>CALL_SOURCE_PLUGIN</td><td>3</td><td>插件</td></tr><tr><td>CALL_SOURCE_OPENCLAW</td><td>4</td><td>openclaw</td></tr><tr><td>CALL_SOURCE_RECALL_TEST</td><td>5</td><td>召回测试</td></tr><tr><td>CALL_SOURCE_RECALL_TEST_DIFF</td><td>6</td><td>召回测试在对比的场景，同样需要触发检索接口。区别这种case前端不需要更新最新配置。因为对比1，2，3 可能最后保存的是2</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetCallSource() const;

                    /**
                     * 设置<p>请求来源<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CALL_SOURCE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>CALL_SOURCE_RAG</td><td>1</td><td>标准模式</td></tr><tr><td>CALL_SOURCE_WORKFLOW</td><td>2</td><td>工作流</td></tr><tr><td>CALL_SOURCE_PLUGIN</td><td>3</td><td>插件</td></tr><tr><td>CALL_SOURCE_OPENCLAW</td><td>4</td><td>openclaw</td></tr><tr><td>CALL_SOURCE_RECALL_TEST</td><td>5</td><td>召回测试</td></tr><tr><td>CALL_SOURCE_RECALL_TEST_DIFF</td><td>6</td><td>召回测试在对比的场景，同样需要触发检索接口。区别这种case前端不需要更新最新配置。因为对比1，2，3 可能最后保存的是2</td></tr></tbody></table></p>
                     * @param _callSource <p>请求来源<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CALL_SOURCE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>CALL_SOURCE_RAG</td><td>1</td><td>标准模式</td></tr><tr><td>CALL_SOURCE_WORKFLOW</td><td>2</td><td>工作流</td></tr><tr><td>CALL_SOURCE_PLUGIN</td><td>3</td><td>插件</td></tr><tr><td>CALL_SOURCE_OPENCLAW</td><td>4</td><td>openclaw</td></tr><tr><td>CALL_SOURCE_RECALL_TEST</td><td>5</td><td>召回测试</td></tr><tr><td>CALL_SOURCE_RECALL_TEST_DIFF</td><td>6</td><td>召回测试在对比的场景，同样需要触发检索接口。区别这种case前端不需要更新最新配置。因为对比1，2，3 可能最后保存的是2</td></tr></tbody></table></p>
                     * 
                     */
                    void SetCallSource(const int64_t& _callSource);

                    /**
                     * 判断参数 CallSource 是否已赋值
                     * @return CallSource 是否已赋值
                     * 
                     */
                    bool CallSourceHasBeenSet() const;

                    /**
                     * 获取<p>adp域：1=开发域，2=生产域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>ADP_DOMAIN_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>ADP_DOMAIN_DEV</td><td>1</td><td>开发域</td></tr><tr><td>ADP_DOMAIN_PROD</td><td>2</td><td>生产域</td></tr></tbody></table></p>
                     * @return Domain <p>adp域：1=开发域，2=生产域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>ADP_DOMAIN_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>ADP_DOMAIN_DEV</td><td>1</td><td>开发域</td></tr><tr><td>ADP_DOMAIN_PROD</td><td>2</td><td>生产域</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetDomain() const;

                    /**
                     * 设置<p>adp域：1=开发域，2=生产域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>ADP_DOMAIN_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>ADP_DOMAIN_DEV</td><td>1</td><td>开发域</td></tr><tr><td>ADP_DOMAIN_PROD</td><td>2</td><td>生产域</td></tr></tbody></table></p>
                     * @param _domain <p>adp域：1=开发域，2=生产域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>ADP_DOMAIN_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>ADP_DOMAIN_DEV</td><td>1</td><td>开发域</td></tr><tr><td>ADP_DOMAIN_PROD</td><td>2</td><td>生产域</td></tr></tbody></table></p>
                     * 
                     */
                    void SetDomain(const int64_t& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>访客 ID</p>
                     * @return VisitorId <p>访客 ID</p>
                     * 
                     */
                    std::string GetVisitorId() const;

                    /**
                     * 设置<p>访客 ID</p>
                     * @param _visitorId <p>访客 ID</p>
                     * 
                     */
                    void SetVisitorId(const std::string& _visitorId);

                    /**
                     * 判断参数 VisitorId 是否已赋值
                     * @return VisitorId 是否已赋值
                     * 
                     */
                    bool VisitorIdHasBeenSet() const;

                private:

                    /**
                     * <p>请求来源<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CALL_SOURCE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>CALL_SOURCE_RAG</td><td>1</td><td>标准模式</td></tr><tr><td>CALL_SOURCE_WORKFLOW</td><td>2</td><td>工作流</td></tr><tr><td>CALL_SOURCE_PLUGIN</td><td>3</td><td>插件</td></tr><tr><td>CALL_SOURCE_OPENCLAW</td><td>4</td><td>openclaw</td></tr><tr><td>CALL_SOURCE_RECALL_TEST</td><td>5</td><td>召回测试</td></tr><tr><td>CALL_SOURCE_RECALL_TEST_DIFF</td><td>6</td><td>召回测试在对比的场景，同样需要触发检索接口。区别这种case前端不需要更新最新配置。因为对比1，2，3 可能最后保存的是2</td></tr></tbody></table></p>
                     */
                    int64_t m_callSource;
                    bool m_callSourceHasBeenSet;

                    /**
                     * <p>adp域：1=开发域，2=生产域<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>ADP_DOMAIN_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>ADP_DOMAIN_DEV</td><td>1</td><td>开发域</td></tr><tr><td>ADP_DOMAIN_PROD</td><td>2</td><td>生产域</td></tr></tbody></table></p>
                     */
                    int64_t m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>访客 ID</p>
                     */
                    std::string m_visitorId;
                    bool m_visitorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHCONTEXT_H_
