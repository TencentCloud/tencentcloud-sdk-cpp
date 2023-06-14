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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDEPLOYGROUPREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDEPLOYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateDeployGroup请求参数结构体
                */
                class CreateDeployGroupRequest : public AbstractModel
                {
                public:
                    CreateDeployGroupRequest();
                    ~CreateDeployGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取置放群组名称，最长不能超过60个字符。
                     * @return DeployGroupName 置放群组名称，最长不能超过60个字符。
                     * 
                     */
                    std::string GetDeployGroupName() const;

                    /**
                     * 设置置放群组名称，最长不能超过60个字符。
                     * @param _deployGroupName 置放群组名称，最长不能超过60个字符。
                     * 
                     */
                    void SetDeployGroupName(const std::string& _deployGroupName);

                    /**
                     * 判断参数 DeployGroupName 是否已赋值
                     * @return DeployGroupName 是否已赋值
                     * 
                     */
                    bool DeployGroupNameHasBeenSet() const;

                    /**
                     * 获取置放群组描述，最长不能超过200个字符。
                     * @return Description 置放群组描述，最长不能超过200个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置置放群组描述，最长不能超过200个字符。
                     * @param _description 置放群组描述，最长不能超过200个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取置放群组的亲和性策略，目前仅支持取值为1，策略1表示同台物理机上限制实例的个数。
                     * @return Affinity 置放群组的亲和性策略，目前仅支持取值为1，策略1表示同台物理机上限制实例的个数。
                     * 
                     */
                    std::vector<int64_t> GetAffinity() const;

                    /**
                     * 设置置放群组的亲和性策略，目前仅支持取值为1，策略1表示同台物理机上限制实例的个数。
                     * @param _affinity 置放群组的亲和性策略，目前仅支持取值为1，策略1表示同台物理机上限制实例的个数。
                     * 
                     */
                    void SetAffinity(const std::vector<int64_t>& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     * 
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取置放群组亲和性策略1中同台物理机上实例的限制个数。
                     * @return LimitNum 置放群组亲和性策略1中同台物理机上实例的限制个数。
                     * 
                     */
                    int64_t GetLimitNum() const;

                    /**
                     * 设置置放群组亲和性策略1中同台物理机上实例的限制个数。
                     * @param _limitNum 置放群组亲和性策略1中同台物理机上实例的限制个数。
                     * 
                     */
                    void SetLimitNum(const int64_t& _limitNum);

                    /**
                     * 判断参数 LimitNum 是否已赋值
                     * @return LimitNum 是否已赋值
                     * 
                     */
                    bool LimitNumHasBeenSet() const;

                    /**
                     * 获取置放群组机型属性，可选参数：SH12+SH02、TS85。
                     * @return DevClass 置放群组机型属性，可选参数：SH12+SH02、TS85。
                     * 
                     */
                    std::vector<std::string> GetDevClass() const;

                    /**
                     * 设置置放群组机型属性，可选参数：SH12+SH02、TS85。
                     * @param _devClass 置放群组机型属性，可选参数：SH12+SH02、TS85。
                     * 
                     */
                    void SetDevClass(const std::vector<std::string>& _devClass);

                    /**
                     * 判断参数 DevClass 是否已赋值
                     * @return DevClass 是否已赋值
                     * 
                     */
                    bool DevClassHasBeenSet() const;

                private:

                    /**
                     * 置放群组名称，最长不能超过60个字符。
                     */
                    std::string m_deployGroupName;
                    bool m_deployGroupNameHasBeenSet;

                    /**
                     * 置放群组描述，最长不能超过200个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 置放群组的亲和性策略，目前仅支持取值为1，策略1表示同台物理机上限制实例的个数。
                     */
                    std::vector<int64_t> m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * 置放群组亲和性策略1中同台物理机上实例的限制个数。
                     */
                    int64_t m_limitNum;
                    bool m_limitNumHasBeenSet;

                    /**
                     * 置放群组机型属性，可选参数：SH12+SH02、TS85。
                     */
                    std::vector<std::string> m_devClass;
                    bool m_devClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDEPLOYGROUPREQUEST_H_
