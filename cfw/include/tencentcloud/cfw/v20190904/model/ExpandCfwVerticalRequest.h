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
                     * 获取<p>nat：nat防火墙，ew：东西向防火墙</p>
                     * @return FwType <p>nat：nat防火墙，ew：东西向防火墙</p>
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置<p>nat：nat防火墙，ew：东西向防火墙</p>
                     * @param _fwType <p>nat：nat防火墙，ew：东西向防火墙</p>
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
                     * 获取<p>带宽值</p>
                     * @return Width <p>带宽值</p>
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置<p>带宽值</p>
                     * @param _width <p>带宽值</p>
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
                     * 获取<p>防火墙实例id</p>
                     * @return CfwInstance <p>防火墙实例id</p>
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置<p>防火墙实例id</p>
                     * @param _cfwInstance <p>防火墙实例id</p>
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
                     * 获取<p>弹性开关 1打开 0 关闭</p>
                     * @return ElasticSwitch <p>弹性开关 1打开 0 关闭</p>
                     * 
                     */
                    int64_t GetElasticSwitch() const;

                    /**
                     * 设置<p>弹性开关 1打开 0 关闭</p>
                     * @param _elasticSwitch <p>弹性开关 1打开 0 关闭</p>
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
                     * 获取<p>弹性带宽上限，单位Mbps</p>
                     * @return ElasticBandwidth <p>弹性带宽上限，单位Mbps</p>
                     * 
                     */
                    int64_t GetElasticBandwidth() const;

                    /**
                     * 设置<p>弹性带宽上限，单位Mbps</p>
                     * @param _elasticBandwidth <p>弹性带宽上限，单位Mbps</p>
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
                     * 获取<p>按量计费标签</p>
                     * @return Tags <p>按量计费标签</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>按量计费标签</p>
                     * @param _tags <p>按量计费标签</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @return ElasticTrafficSwitch <p>按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetElasticTrafficSwitch() const;

                    /**
                     * 设置<p>按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * @param _elasticTrafficSwitch <p>按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     * 
                     */
                    void SetElasticTrafficSwitch(const int64_t& _elasticTrafficSwitch);

                    /**
                     * 判断参数 ElasticTrafficSwitch 是否已赋值
                     * @return ElasticTrafficSwitch 是否已赋值
                     * 
                     */
                    bool ElasticTrafficSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>nat：nat防火墙，ew：东西向防火墙</p>
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * <p>带宽值</p>
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>防火墙实例id</p>
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                    /**
                     * <p>弹性开关 1打开 0 关闭</p>
                     */
                    int64_t m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * <p>弹性带宽上限，单位Mbps</p>
                     */
                    int64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                    /**
                     * <p>按量计费标签</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>按流量弹性开关</p><p>取值范围：[0, 1]</p><p>默认值：0</p>
                     */
                    int64_t m_elasticTrafficSwitch;
                    bool m_elasticTrafficSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_EXPANDCFWVERTICALREQUEST_H_
