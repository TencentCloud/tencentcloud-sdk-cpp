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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCER_H_

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
                * 负载均衡的监听器
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>负载均衡LD的ID</p>
                     * @return LoadBalancerId <p>负载均衡LD的ID</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>负载均衡LD的ID</p>
                     * @param _loadBalancerId <p>负载均衡LD的ID</p>
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡LD的名称</p>
                     * @return LoadBalancerName <p>负载均衡LD的名称</p>
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置<p>负载均衡LD的名称</p>
                     * @param _loadBalancerName <p>负载均衡LD的名称</p>
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡监听器的ID</p>
                     * @return ListenerId <p>负载均衡监听器的ID</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>负载均衡监听器的ID</p>
                     * @param _listenerId <p>负载均衡监听器的ID</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡监听器的名称</p>
                     * @return ListenerName <p>负载均衡监听器的名称</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>负载均衡监听器的名称</p>
                     * @param _listenerName <p>负载均衡监听器的名称</p>
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例的端口</p>
                     * @return Vport <p>负载均衡实例的端口</p>
                     * 
                     */
                    uint64_t GetVport() const;

                    /**
                     * 设置<p>负载均衡实例的端口</p>
                     * @param _vport <p>负载均衡实例的端口</p>
                     * 
                     */
                    void SetVport(const uint64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡LD的地域<br>与 ApRegion 表达同一含义、格式不同。本字段为地域缩写；入参与 ApRegion 同时传入时以 ApRegion 为准</p>
                     * @return Region <p>负载均衡LD的地域<br>与 ApRegion 表达同一含义、格式不同。本字段为地域缩写；入参与 ApRegion 同时传入时以 ApRegion 为准</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>负载均衡LD的地域<br>与 ApRegion 表达同一含义、格式不同。本字段为地域缩写；入参与 ApRegion 同时传入时以 ApRegion 为准</p>
                     * @param _region <p>负载均衡LD的地域<br>与 ApRegion 表达同一含义、格式不同。本字段为地域缩写；入参与 ApRegion 同时传入时以 ApRegion 为准</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>监听器协议，http、https</p>
                     * @return Protocol <p>监听器协议，http、https</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>监听器协议，http、https</p>
                     * @param _protocol <p>监听器协议，http、https</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡监听器所在的zone</p>
                     * @return Zone <p>负载均衡监听器所在的zone</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>负载均衡监听器所在的zone</p>
                     * @param _zone <p>负载均衡监听器所在的zone</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例所在地域，腾讯云标准地域格式<br>参数格式：形如 ap-guangzhou<br>与 Region 表达同一含义、格式不同。监听器恒为单地域，数组长度恒为 0 或 1<br>入参可选；与 Region 同时传入时以本字段为准；取值不在枚举范围内时返回 UnsupportedRegion<br>出参在可识别时填充，无法识别时为空数组<br>枚举值：<br>ap-guangzhou：广州<br>ap-shanghai：上海<br>ap-beijing：北京<br>ap-chengdu：成都<br>ap-chongqing：重庆<br>ap-hongkong：中国香港<br>ap-nanjing：南京<br>ap-tianjin：天津<br>ap-shenzhen：深圳<br>ap-qingyuan：清远<br>ap-guangzhou-open：广州Open<br>ap-shenzhen-fsi：深圳金融<br>ap-beijing-fsi：北京金融<br>ap-shanghai-fsi：上海金融<br>ap-hangzhou-ec：杭州<br>ap-fuzhou-ec：福州<br>ap-jinan-ec：济南<br>ap-wuhan-ec：武汉<br>ap-changsha-ec：长沙<br>ap-hefei-ec：合肥<br>ap-shenyang-ec：沈阳<br>ap-xian-ec：西安<br>ap-xibei-ec：西北<br>ap-shijiazhuang-ec：石家庄<br>ap-zhengzhou-ec：郑州<br>ap-qingyuan-xinan：清远信安<br>ap-shanghai-adc：上海ADC<br>ap-shanghai-wxp-ops：上海无线城市运营<br>ap-singapore：新加坡<br>ap-seoul：首尔<br>ap-tokyo：东京<br>ap-osaka：大阪<br>ap-mumbai：孟买<br>ap-bangkok：曼谷<br>ap-jakarta：雅加达<br>ap-taipei：台北<br>ap-johorbahru：柔佛巴鲁<br>eu-frankfurt：法兰克福<br>eu-moscow：莫斯科<br>na-ashburn：弗吉尼亚<br>na-siliconvalley：硅谷<br>na-toronto：多伦多<br>sa-saopaulo：圣保罗<br>me-saudi-arabia：沙特阿拉伯</p>
                     * @return ApRegion <p>负载均衡实例所在地域，腾讯云标准地域格式<br>参数格式：形如 ap-guangzhou<br>与 Region 表达同一含义、格式不同。监听器恒为单地域，数组长度恒为 0 或 1<br>入参可选；与 Region 同时传入时以本字段为准；取值不在枚举范围内时返回 UnsupportedRegion<br>出参在可识别时填充，无法识别时为空数组<br>枚举值：<br>ap-guangzhou：广州<br>ap-shanghai：上海<br>ap-beijing：北京<br>ap-chengdu：成都<br>ap-chongqing：重庆<br>ap-hongkong：中国香港<br>ap-nanjing：南京<br>ap-tianjin：天津<br>ap-shenzhen：深圳<br>ap-qingyuan：清远<br>ap-guangzhou-open：广州Open<br>ap-shenzhen-fsi：深圳金融<br>ap-beijing-fsi：北京金融<br>ap-shanghai-fsi：上海金融<br>ap-hangzhou-ec：杭州<br>ap-fuzhou-ec：福州<br>ap-jinan-ec：济南<br>ap-wuhan-ec：武汉<br>ap-changsha-ec：长沙<br>ap-hefei-ec：合肥<br>ap-shenyang-ec：沈阳<br>ap-xian-ec：西安<br>ap-xibei-ec：西北<br>ap-shijiazhuang-ec：石家庄<br>ap-zhengzhou-ec：郑州<br>ap-qingyuan-xinan：清远信安<br>ap-shanghai-adc：上海ADC<br>ap-shanghai-wxp-ops：上海无线城市运营<br>ap-singapore：新加坡<br>ap-seoul：首尔<br>ap-tokyo：东京<br>ap-osaka：大阪<br>ap-mumbai：孟买<br>ap-bangkok：曼谷<br>ap-jakarta：雅加达<br>ap-taipei：台北<br>ap-johorbahru：柔佛巴鲁<br>eu-frankfurt：法兰克福<br>eu-moscow：莫斯科<br>na-ashburn：弗吉尼亚<br>na-siliconvalley：硅谷<br>na-toronto：多伦多<br>sa-saopaulo：圣保罗<br>me-saudi-arabia：沙特阿拉伯</p>
                     * 
                     */
                    std::vector<std::string> GetApRegion() const;

                    /**
                     * 设置<p>负载均衡实例所在地域，腾讯云标准地域格式<br>参数格式：形如 ap-guangzhou<br>与 Region 表达同一含义、格式不同。监听器恒为单地域，数组长度恒为 0 或 1<br>入参可选；与 Region 同时传入时以本字段为准；取值不在枚举范围内时返回 UnsupportedRegion<br>出参在可识别时填充，无法识别时为空数组<br>枚举值：<br>ap-guangzhou：广州<br>ap-shanghai：上海<br>ap-beijing：北京<br>ap-chengdu：成都<br>ap-chongqing：重庆<br>ap-hongkong：中国香港<br>ap-nanjing：南京<br>ap-tianjin：天津<br>ap-shenzhen：深圳<br>ap-qingyuan：清远<br>ap-guangzhou-open：广州Open<br>ap-shenzhen-fsi：深圳金融<br>ap-beijing-fsi：北京金融<br>ap-shanghai-fsi：上海金融<br>ap-hangzhou-ec：杭州<br>ap-fuzhou-ec：福州<br>ap-jinan-ec：济南<br>ap-wuhan-ec：武汉<br>ap-changsha-ec：长沙<br>ap-hefei-ec：合肥<br>ap-shenyang-ec：沈阳<br>ap-xian-ec：西安<br>ap-xibei-ec：西北<br>ap-shijiazhuang-ec：石家庄<br>ap-zhengzhou-ec：郑州<br>ap-qingyuan-xinan：清远信安<br>ap-shanghai-adc：上海ADC<br>ap-shanghai-wxp-ops：上海无线城市运营<br>ap-singapore：新加坡<br>ap-seoul：首尔<br>ap-tokyo：东京<br>ap-osaka：大阪<br>ap-mumbai：孟买<br>ap-bangkok：曼谷<br>ap-jakarta：雅加达<br>ap-taipei：台北<br>ap-johorbahru：柔佛巴鲁<br>eu-frankfurt：法兰克福<br>eu-moscow：莫斯科<br>na-ashburn：弗吉尼亚<br>na-siliconvalley：硅谷<br>na-toronto：多伦多<br>sa-saopaulo：圣保罗<br>me-saudi-arabia：沙特阿拉伯</p>
                     * @param _apRegion <p>负载均衡实例所在地域，腾讯云标准地域格式<br>参数格式：形如 ap-guangzhou<br>与 Region 表达同一含义、格式不同。监听器恒为单地域，数组长度恒为 0 或 1<br>入参可选；与 Region 同时传入时以本字段为准；取值不在枚举范围内时返回 UnsupportedRegion<br>出参在可识别时填充，无法识别时为空数组<br>枚举值：<br>ap-guangzhou：广州<br>ap-shanghai：上海<br>ap-beijing：北京<br>ap-chengdu：成都<br>ap-chongqing：重庆<br>ap-hongkong：中国香港<br>ap-nanjing：南京<br>ap-tianjin：天津<br>ap-shenzhen：深圳<br>ap-qingyuan：清远<br>ap-guangzhou-open：广州Open<br>ap-shenzhen-fsi：深圳金融<br>ap-beijing-fsi：北京金融<br>ap-shanghai-fsi：上海金融<br>ap-hangzhou-ec：杭州<br>ap-fuzhou-ec：福州<br>ap-jinan-ec：济南<br>ap-wuhan-ec：武汉<br>ap-changsha-ec：长沙<br>ap-hefei-ec：合肥<br>ap-shenyang-ec：沈阳<br>ap-xian-ec：西安<br>ap-xibei-ec：西北<br>ap-shijiazhuang-ec：石家庄<br>ap-zhengzhou-ec：郑州<br>ap-qingyuan-xinan：清远信安<br>ap-shanghai-adc：上海ADC<br>ap-shanghai-wxp-ops：上海无线城市运营<br>ap-singapore：新加坡<br>ap-seoul：首尔<br>ap-tokyo：东京<br>ap-osaka：大阪<br>ap-mumbai：孟买<br>ap-bangkok：曼谷<br>ap-jakarta：雅加达<br>ap-taipei：台北<br>ap-johorbahru：柔佛巴鲁<br>eu-frankfurt：法兰克福<br>eu-moscow：莫斯科<br>na-ashburn：弗吉尼亚<br>na-siliconvalley：硅谷<br>na-toronto：多伦多<br>sa-saopaulo：圣保罗<br>me-saudi-arabia：沙特阿拉伯</p>
                     * 
                     */
                    void SetApRegion(const std::vector<std::string>& _apRegion);

                    /**
                     * 判断参数 ApRegion 是否已赋值
                     * @return ApRegion 是否已赋值
                     * 
                     */
                    bool ApRegionHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例的IP。域名化CLB VIP可填空。</p>
                     * @return Vip <p>负载均衡实例的IP。域名化CLB VIP可填空。</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>负载均衡实例的IP。域名化CLB VIP可填空。</p>
                     * @param _vip <p>负载均衡实例的IP。域名化CLB VIP可填空。</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡的VPCID，公网为-1，内网按实际填写</p>
                     * @return NumericalVpcId <p>负载均衡的VPCID，公网为-1，内网按实际填写</p>
                     * 
                     */
                    int64_t GetNumericalVpcId() const;

                    /**
                     * 设置<p>负载均衡的VPCID，公网为-1，内网按实际填写</p>
                     * @param _numericalVpcId <p>负载均衡的VPCID，公网为-1，内网按实际填写</p>
                     * 
                     */
                    void SetNumericalVpcId(const int64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     * 
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡的网络类型。OPEN： 公网 INTERNAL ：内网</p>
                     * @return LoadBalancerType <p>负载均衡的网络类型。OPEN： 公网 INTERNAL ：内网</p>
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置<p>负载均衡的网络类型。OPEN： 公网 INTERNAL ：内网</p>
                     * @param _loadBalancerType <p>负载均衡的网络类型。OPEN： 公网 INTERNAL ：内网</p>
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡的域名</p>
                     * @return LoadBalancerDomain <p>负载均衡的域名</p>
                     * 
                     */
                    std::string GetLoadBalancerDomain() const;

                    /**
                     * 设置<p>负载均衡的域名</p>
                     * @param _loadBalancerDomain <p>负载均衡的域名</p>
                     * 
                     */
                    void SetLoadBalancerDomain(const std::string& _loadBalancerDomain);

                    /**
                     * 判断参数 LoadBalancerDomain 是否已赋值
                     * @return LoadBalancerDomain 是否已赋值
                     * 
                     */
                    bool LoadBalancerDomainHasBeenSet() const;

                    /**
                     * 获取<p>监听器所属成员id</p>
                     * @return MemberAppId <p>监听器所属成员id</p>
                     * 
                     */
                    uint64_t GetMemberAppId() const;

                    /**
                     * 设置<p>监听器所属成员id</p>
                     * @param _memberAppId <p>监听器所属成员id</p>
                     * 
                     */
                    void SetMemberAppId(const uint64_t& _memberAppId);

                    /**
                     * 判断参数 MemberAppId 是否已赋值
                     * @return MemberAppId 是否已赋值
                     * 
                     */
                    bool MemberAppIdHasBeenSet() const;

                    /**
                     * 获取<p>监听器所属成员的uin</p>
                     * @return MemberUin <p>监听器所属成员的uin</p>
                     * 
                     */
                    std::string GetMemberUin() const;

                    /**
                     * 设置<p>监听器所属成员的uin</p>
                     * @param _memberUin <p>监听器所属成员的uin</p>
                     * 
                     */
                    void SetMemberUin(const std::string& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                private:

                    /**
                     * <p>负载均衡LD的ID</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>负载均衡LD的名称</p>
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * <p>负载均衡监听器的ID</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>负载均衡监听器的名称</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>负载均衡实例的端口</p>
                     */
                    uint64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>负载均衡LD的地域<br>与 ApRegion 表达同一含义、格式不同。本字段为地域缩写；入参与 ApRegion 同时传入时以 ApRegion 为准</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>监听器协议，http、https</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>负载均衡监听器所在的zone</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>负载均衡实例所在地域，腾讯云标准地域格式<br>参数格式：形如 ap-guangzhou<br>与 Region 表达同一含义、格式不同。监听器恒为单地域，数组长度恒为 0 或 1<br>入参可选；与 Region 同时传入时以本字段为准；取值不在枚举范围内时返回 UnsupportedRegion<br>出参在可识别时填充，无法识别时为空数组<br>枚举值：<br>ap-guangzhou：广州<br>ap-shanghai：上海<br>ap-beijing：北京<br>ap-chengdu：成都<br>ap-chongqing：重庆<br>ap-hongkong：中国香港<br>ap-nanjing：南京<br>ap-tianjin：天津<br>ap-shenzhen：深圳<br>ap-qingyuan：清远<br>ap-guangzhou-open：广州Open<br>ap-shenzhen-fsi：深圳金融<br>ap-beijing-fsi：北京金融<br>ap-shanghai-fsi：上海金融<br>ap-hangzhou-ec：杭州<br>ap-fuzhou-ec：福州<br>ap-jinan-ec：济南<br>ap-wuhan-ec：武汉<br>ap-changsha-ec：长沙<br>ap-hefei-ec：合肥<br>ap-shenyang-ec：沈阳<br>ap-xian-ec：西安<br>ap-xibei-ec：西北<br>ap-shijiazhuang-ec：石家庄<br>ap-zhengzhou-ec：郑州<br>ap-qingyuan-xinan：清远信安<br>ap-shanghai-adc：上海ADC<br>ap-shanghai-wxp-ops：上海无线城市运营<br>ap-singapore：新加坡<br>ap-seoul：首尔<br>ap-tokyo：东京<br>ap-osaka：大阪<br>ap-mumbai：孟买<br>ap-bangkok：曼谷<br>ap-jakarta：雅加达<br>ap-taipei：台北<br>ap-johorbahru：柔佛巴鲁<br>eu-frankfurt：法兰克福<br>eu-moscow：莫斯科<br>na-ashburn：弗吉尼亚<br>na-siliconvalley：硅谷<br>na-toronto：多伦多<br>sa-saopaulo：圣保罗<br>me-saudi-arabia：沙特阿拉伯</p>
                     */
                    std::vector<std::string> m_apRegion;
                    bool m_apRegionHasBeenSet;

                    /**
                     * <p>负载均衡实例的IP。域名化CLB VIP可填空。</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>负载均衡的VPCID，公网为-1，内网按实际填写</p>
                     */
                    int64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * <p>负载均衡的网络类型。OPEN： 公网 INTERNAL ：内网</p>
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * <p>负载均衡的域名</p>
                     */
                    std::string m_loadBalancerDomain;
                    bool m_loadBalancerDomainHasBeenSet;

                    /**
                     * <p>监听器所属成员id</p>
                     */
                    uint64_t m_memberAppId;
                    bool m_memberAppIdHasBeenSet;

                    /**
                     * <p>监听器所属成员的uin</p>
                     */
                    std::string m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCER_H_
