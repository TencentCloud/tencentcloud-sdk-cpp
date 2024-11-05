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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SCANIPINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SCANIPINFO_H_

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
                * 扫描ip信息
                */
                class ScanIpInfo : public AbstractModel
                {
                public:
                    ScanIpInfo();
                    ~ScanIpInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属业务

                     * @return Bussiness 所属业务

                     * 
                     */
                    std::string GetBussiness() const;

                    /**
                     * 设置所属业务

                     * @param _bussiness 所属业务

                     * 
                     */
                    void SetBussiness(const std::string& _bussiness);

                    /**
                     * 判断参数 Bussiness 是否已赋值
                     * @return Bussiness 是否已赋值
                     * 
                     */
                    bool BussinessHasBeenSet() const;

                    /**
                     * 获取扫描对象
                     * @return Target 扫描对象
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置扫描对象
                     * @param _target 扫描对象
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取ip列表
                     * @return IpList ip列表
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置ip列表
                     * @param _ipList ip列表
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取扫描说明
                     * @return Descibe 扫描说明
                     * 
                     */
                    std::string GetDescibe() const;

                    /**
                     * 设置扫描说明
                     * @param _descibe 扫描说明
                     * 
                     */
                    void SetDescibe(const std::string& _descibe);

                    /**
                     * 判断参数 Descibe 是否已赋值
                     * @return Descibe 是否已赋值
                     * 
                     */
                    bool DescibeHasBeenSet() const;

                    /**
                     * 获取官方公告

                     * @return Referer 官方公告

                     * 
                     */
                    std::string GetReferer() const;

                    /**
                     * 设置官方公告

                     * @param _referer 官方公告

                     * 
                     */
                    void SetReferer(const std::string& _referer);

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     * 
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 所属业务

                     */
                    std::string m_bussiness;
                    bool m_bussinessHasBeenSet;

                    /**
                     * 扫描对象
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * ip列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * 扫描说明
                     */
                    std::string m_descibe;
                    bool m_descibeHasBeenSet;

                    /**
                     * 官方公告

                     */
                    std::string m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SCANIPINFO_H_
