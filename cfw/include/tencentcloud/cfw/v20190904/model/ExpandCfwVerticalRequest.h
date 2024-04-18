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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_EXPANDCFWVERTICALREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_EXPANDCFWVERTICALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/TagInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ExpandCfwVertical请求参数结构体
                */
                class ExpandCfwVerticalRequest : public AbstractModel
                {
                public:
                    ExpandCfwVerticalRequest();
                    ~ExpandCfwVerticalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取nat：nat防火墙，ew：东西向防火墙
                     * @return FwType nat：nat防火墙，ew：东西向防火墙
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置nat：nat防火墙，ew：东西向防火墙
                     * @param _fwType nat：nat防火墙，ew：东西向防火墙
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取带宽值
                     * @return Width 带宽值
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置带宽值
                     * @param _width 带宽值
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取防火墙实例id
                     * @return CfwInstance 防火墙实例id
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置防火墙实例id
                     * @param _cfwInstance 防火墙实例id
                     * 
                     */
                    void SetCfwInstance(const std::string& _cfwInstance);

                    /**
                     * 判断参数 CfwInstance 是否已赋值
                     * @return CfwInstance 是否已赋值
                     * 
                     */
                    bool CfwInstanceHasBeenSet() const;

                    /**
                     * 获取弹性开关 1打开 0 关闭
                     * @return ElasticSwitch 弹性开关 1打开 0 关闭
                     * 
                     */
                    int64_t GetElasticSwitch() const;

                    /**
                     * 设置弹性开关 1打开 0 关闭
                     * @param _elasticSwitch 弹性开关 1打开 0 关闭
                     * 
                     */
                    void SetElasticSwitch(const int64_t& _elasticSwitch);

                    /**
                     * 判断参数 ElasticSwitch 是否已赋值
                     * @return ElasticSwitch 是否已赋值
                     * 
                     */
                    bool ElasticSwitchHasBeenSet() const;

                    /**
                     * 获取弹性带宽上限，单位Mbps
                     * @return ElasticBandwidth 弹性带宽上限，单位Mbps
                     * 
                     */
                    int64_t GetElasticBandwidth() const;

                    /**
                     * 设置弹性带宽上限，单位Mbps
                     * @param _elasticBandwidth 弹性带宽上限，单位Mbps
                     * 
                     */
                    void SetElasticBandwidth(const int64_t& _elasticBandwidth);

                    /**
                     * 判断参数 ElasticBandwidth 是否已赋值
                     * @return ElasticBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthHasBeenSet() const;

                    /**
                     * 获取按量计费标签
                     * @return Tags 按量计费标签
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置按量计费标签
                     * @param _tags 按量计费标签
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * nat：nat防火墙，ew：东西向防火墙
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 带宽值
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 防火墙实例id
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                    /**
                     * 弹性开关 1打开 0 关闭
                     */
                    int64_t m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * 弹性带宽上限，单位Mbps
                     */
                    int64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                    /**
                     * 按量计费标签
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_EXPANDCFWVERTICALREQUEST_H_
