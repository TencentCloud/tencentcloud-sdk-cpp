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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEEVENTLOGDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEEVENTLOGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeEventLogData请求参数结构体
                */
                class DescribeEventLogDataRequest : public AbstractModel
                {
                public:
                    DescribeEventLogDataRequest();
                    ~DescribeEventLogDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防护类型，映射如下：
  waf = "Web攻击"
  cc = "CC攻击"
                     * @return Mode 防护类型，映射如下：
  waf = "Web攻击"
  cc = "CC攻击"
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置防护类型，映射如下：
  waf = "Web攻击"
  cc = "CC攻击"
                     * @param _mode 防护类型，映射如下：
  waf = "Web攻击"
  cc = "CC攻击"
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
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间，最长跨度为30分钟
                     * @return EndTime 结束时间，最长跨度为30分钟
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，最长跨度为30分钟
                     * @param _endTime 结束时间，最长跨度为30分钟
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
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
参数放空，表示查询全部动作数据
                     * @return ActionName 执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
参数放空，表示查询全部动作数据
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
参数放空，表示查询全部动作数据
                     * @param _actionName 执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
参数放空，表示查询全部动作数据
                     * 
                     */
                    void SetActionName(const std::string& _actionName);

                    /**
                     * 判断参数 ActionName 是否已赋值
                     * @return ActionName 是否已赋值
                     * 
                     */
                    bool ActionNameHasBeenSet() const;

                    /**
                     * 获取请求URL，支持URL开头和结尾使用\*表示通配
如：
/files/* 表示所有以/files/开头的请求
*.jpg 表示所有以.jpg结尾的请求
                     * @return Url 请求URL，支持URL开头和结尾使用\*表示通配
如：
/files/* 表示所有以/files/开头的请求
*.jpg 表示所有以.jpg结尾的请求
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置请求URL，支持URL开头和结尾使用\*表示通配
如：
/files/* 表示所有以/files/开头的请求
*.jpg 表示所有以.jpg结尾的请求
                     * @param _url 请求URL，支持URL开头和结尾使用\*表示通配
如：
/files/* 表示所有以/files/开头的请求
*.jpg 表示所有以.jpg结尾的请求
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
                     * 获取地域 mainland 或者 overseas，为空时默认 mainland
                     * @return Area 地域 mainland 或者 overseas，为空时默认 mainland
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域 mainland 或者 overseas，为空时默认 mainland
                     * @param _area 地域 mainland 或者 overseas，为空时默认 mainland
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取来源产品，cdn 或者 ecdn，为空时默认 cdn
                     * @return Source 来源产品，cdn 或者 ecdn，为空时默认 cdn
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源产品，cdn 或者 ecdn，为空时默认 cdn
                     * @param _source 来源产品，cdn 或者 ecdn，为空时默认 cdn
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 防护类型，映射如下：
  waf = "Web攻击"
  cc = "CC攻击"
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，最长跨度为30分钟
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 执行动作，取值为：intercept/redirect/observe
分别表示：拦截/重定向/观察
参数放空，表示查询全部动作数据
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * 请求URL，支持URL开头和结尾使用\*表示通配
如：
/files/* 表示所有以/files/开头的请求
*.jpg 表示所有以.jpg结尾的请求
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 地域 mainland 或者 overseas，为空时默认 mainland
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 来源产品，cdn 或者 ecdn，为空时默认 cdn
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEEVENTLOGDATAREQUEST_H_
