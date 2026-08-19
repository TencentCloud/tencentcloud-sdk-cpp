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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLBLISTENERRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLBLISTENERRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CLB七层转发规则
                */
                class ClbListenerRuleItem : public AbstractModel
                {
                public:
                    ClbListenerRuleItem();
                    ~ClbListenerRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>监听器ID</p>
                     * @return ListenerID <p>监听器ID</p>
                     * 
                     */
                    std::string GetListenerID() const;

                    /**
                     * 设置<p>监听器ID</p>
                     * @param _listenerID <p>监听器ID</p>
                     * 
                     */
                    void SetListenerID(const std::string& _listenerID);

                    /**
                     * 判断参数 ListenerID 是否已赋值
                     * @return ListenerID 是否已赋值
                     * 
                     */
                    bool ListenerIDHasBeenSet() const;

                    /**
                     * 获取<p>规则ID</p>
                     * @return LocationID <p>规则ID</p>
                     * 
                     */
                    std::string GetLocationID() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _locationID <p>规则ID</p>
                     * 
                     */
                    void SetLocationID(const std::string& _locationID);

                    /**
                     * 判断参数 LocationID 是否已赋值
                     * @return LocationID 是否已赋值
                     * 
                     */
                    bool LocationIDHasBeenSet() const;

                    /**
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>URL</p>
                     * @return Url <p>URL</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>URL</p>
                     * @param _url <p>URL</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>监听器ID</p>
                     */
                    std::string m_listenerID;
                    bool m_listenerIDHasBeenSet;

                    /**
                     * <p>规则ID</p>
                     */
                    std::string m_locationID;
                    bool m_locationIDHasBeenSet;

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>URL</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLBLISTENERRULEITEM_H_
