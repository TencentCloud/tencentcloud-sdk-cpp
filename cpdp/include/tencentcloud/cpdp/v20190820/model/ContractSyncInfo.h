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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTSYNCINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTSYNCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/ExternalReturnContractInfo.h>
#include <tencentcloud/cpdp/v20190820/model/ExternalContractUserInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 签约同步信息
                */
                class ContractSyncInfo : public AbstractModel
                {
                public:
                    ContractSyncInfo();
                    ~ContractSyncInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方渠道合约信息
                     * @return ExternalReturnContractInfo 第三方渠道合约信息
                     * 
                     */
                    ExternalReturnContractInfo GetExternalReturnContractInfo() const;

                    /**
                     * 设置第三方渠道合约信息
                     * @param _externalReturnContractInfo 第三方渠道合约信息
                     * 
                     */
                    void SetExternalReturnContractInfo(const ExternalReturnContractInfo& _externalReturnContractInfo);

                    /**
                     * 判断参数 ExternalReturnContractInfo 是否已赋值
                     * @return ExternalReturnContractInfo 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractInfoHasBeenSet() const;

                    /**
                     * 获取第三方渠道用户信息
                     * @return ExternalContractUserInfo 第三方渠道用户信息
                     * 
                     */
                    std::vector<ExternalContractUserInfo> GetExternalContractUserInfo() const;

                    /**
                     * 设置第三方渠道用户信息
                     * @param _externalContractUserInfo 第三方渠道用户信息
                     * 
                     */
                    void SetExternalContractUserInfo(const std::vector<ExternalContractUserInfo>& _externalContractUserInfo);

                    /**
                     * 判断参数 ExternalContractUserInfo 是否已赋值
                     * @return ExternalContractUserInfo 是否已赋值
                     * 
                     */
                    bool ExternalContractUserInfoHasBeenSet() const;

                    /**
                     * 获取签约方式，枚举值，
<br/>CONTRACT_METHOD_WECHAT_INVALID: 无效
CONTRACT_METHOD_WECHAT_APP: 微信APP
CONTRACT_METHOD_WECHAT_PUBLIC: 微信公众号
CONTRACT_METHOD_WECHAT_MINIPROGRAM: 微信小程序
CONTRACT_METHOD_WECHAT_H5: 微信H5
                     * @return ContractMethod 签约方式，枚举值，
<br/>CONTRACT_METHOD_WECHAT_INVALID: 无效
CONTRACT_METHOD_WECHAT_APP: 微信APP
CONTRACT_METHOD_WECHAT_PUBLIC: 微信公众号
CONTRACT_METHOD_WECHAT_MINIPROGRAM: 微信小程序
CONTRACT_METHOD_WECHAT_H5: 微信H5
                     * 
                     */
                    std::string GetContractMethod() const;

                    /**
                     * 设置签约方式，枚举值，
<br/>CONTRACT_METHOD_WECHAT_INVALID: 无效
CONTRACT_METHOD_WECHAT_APP: 微信APP
CONTRACT_METHOD_WECHAT_PUBLIC: 微信公众号
CONTRACT_METHOD_WECHAT_MINIPROGRAM: 微信小程序
CONTRACT_METHOD_WECHAT_H5: 微信H5
                     * @param _contractMethod 签约方式，枚举值，
<br/>CONTRACT_METHOD_WECHAT_INVALID: 无效
CONTRACT_METHOD_WECHAT_APP: 微信APP
CONTRACT_METHOD_WECHAT_PUBLIC: 微信公众号
CONTRACT_METHOD_WECHAT_MINIPROGRAM: 微信小程序
CONTRACT_METHOD_WECHAT_H5: 微信H5
                     * 
                     */
                    void SetContractMethod(const std::string& _contractMethod);

                    /**
                     * 判断参数 ContractMethod 是否已赋值
                     * @return ContractMethod 是否已赋值
                     * 
                     */
                    bool ContractMethodHasBeenSet() const;

                    /**
                     * 获取在米大师侧分配的场景id
                     * @return ContractSceneId 在米大师侧分配的场景id
                     * 
                     */
                    std::string GetContractSceneId() const;

                    /**
                     * 设置在米大师侧分配的场景id
                     * @param _contractSceneId 在米大师侧分配的场景id
                     * 
                     */
                    void SetContractSceneId(const std::string& _contractSceneId);

                    /**
                     * 判断参数 ContractSceneId 是否已赋值
                     * @return ContractSceneId 是否已赋值
                     * 
                     */
                    bool ContractSceneIdHasBeenSet() const;

                    /**
                     * 获取调用方从第三方渠道查询到的签约数据，由各个渠道定义
                     * @return ExternalReturnContractData 调用方从第三方渠道查询到的签约数据，由各个渠道定义
                     * 
                     */
                    std::string GetExternalReturnContractData() const;

                    /**
                     * 设置调用方从第三方渠道查询到的签约数据，由各个渠道定义
                     * @param _externalReturnContractData 调用方从第三方渠道查询到的签约数据，由各个渠道定义
                     * 
                     */
                    void SetExternalReturnContractData(const std::string& _externalReturnContractData);

                    /**
                     * 判断参数 ExternalReturnContractData 是否已赋值
                     * @return ExternalReturnContractData 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractDataHasBeenSet() const;

                private:

                    /**
                     * 第三方渠道合约信息
                     */
                    ExternalReturnContractInfo m_externalReturnContractInfo;
                    bool m_externalReturnContractInfoHasBeenSet;

                    /**
                     * 第三方渠道用户信息
                     */
                    std::vector<ExternalContractUserInfo> m_externalContractUserInfo;
                    bool m_externalContractUserInfoHasBeenSet;

                    /**
                     * 签约方式，枚举值，
<br/>CONTRACT_METHOD_WECHAT_INVALID: 无效
CONTRACT_METHOD_WECHAT_APP: 微信APP
CONTRACT_METHOD_WECHAT_PUBLIC: 微信公众号
CONTRACT_METHOD_WECHAT_MINIPROGRAM: 微信小程序
CONTRACT_METHOD_WECHAT_H5: 微信H5
                     */
                    std::string m_contractMethod;
                    bool m_contractMethodHasBeenSet;

                    /**
                     * 在米大师侧分配的场景id
                     */
                    std::string m_contractSceneId;
                    bool m_contractSceneIdHasBeenSet;

                    /**
                     * 调用方从第三方渠道查询到的签约数据，由各个渠道定义
                     */
                    std::string m_externalReturnContractData;
                    bool m_externalReturnContractDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTSYNCINFO_H_
