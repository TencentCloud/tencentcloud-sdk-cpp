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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SDKAPPIDBUYINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SDKAPPIDBUYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/StaffBuyInfo.h>
#include <tencentcloud/ccc/v20200210/model/PhoneNumBuyInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 应用购买信息
                */
                class SdkAppIdBuyInfo : public AbstractModel
                {
                public:
                    SdkAppIdBuyInfo();
                    ~SdkAppIdBuyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
                     * @return SdkAppId 应用ID
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID
                     * @param _sdkAppId 应用ID
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return Name 应用名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
                     * @param _name 应用名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取座席购买数（还在有效期内）
                     * @return StaffBuyNum 座席购买数（还在有效期内）
                     * 
                     */
                    int64_t GetStaffBuyNum() const;

                    /**
                     * 设置座席购买数（还在有效期内）
                     * @param _staffBuyNum 座席购买数（还在有效期内）
                     * 
                     */
                    void SetStaffBuyNum(const int64_t& _staffBuyNum);

                    /**
                     * 判断参数 StaffBuyNum 是否已赋值
                     * @return StaffBuyNum 是否已赋值
                     * 
                     */
                    bool StaffBuyNumHasBeenSet() const;

                    /**
                     * 获取座席购买列表 （还在有效期内）
                     * @return StaffBuyList 座席购买列表 （还在有效期内）
                     * 
                     */
                    std::vector<StaffBuyInfo> GetStaffBuyList() const;

                    /**
                     * 设置座席购买列表 （还在有效期内）
                     * @param _staffBuyList 座席购买列表 （还在有效期内）
                     * 
                     */
                    void SetStaffBuyList(const std::vector<StaffBuyInfo>& _staffBuyList);

                    /**
                     * 判断参数 StaffBuyList 是否已赋值
                     * @return StaffBuyList 是否已赋值
                     * 
                     */
                    bool StaffBuyListHasBeenSet() const;

                    /**
                     * 获取号码购买列表
                     * @return PhoneNumBuyList 号码购买列表
                     * 
                     */
                    std::vector<PhoneNumBuyInfo> GetPhoneNumBuyList() const;

                    /**
                     * 设置号码购买列表
                     * @param _phoneNumBuyList 号码购买列表
                     * 
                     */
                    void SetPhoneNumBuyList(const std::vector<PhoneNumBuyInfo>& _phoneNumBuyList);

                    /**
                     * 判断参数 PhoneNumBuyList 是否已赋值
                     * @return PhoneNumBuyList 是否已赋值
                     * 
                     */
                    bool PhoneNumBuyListHasBeenSet() const;

                    /**
                     * 获取办公电话购买数（还在有效期内）
                     * @return SipBuyNum 办公电话购买数（还在有效期内）
                     * 
                     */
                    int64_t GetSipBuyNum() const;

                    /**
                     * 设置办公电话购买数（还在有效期内）
                     * @param _sipBuyNum 办公电话购买数（还在有效期内）
                     * 
                     */
                    void SetSipBuyNum(const int64_t& _sipBuyNum);

                    /**
                     * 判断参数 SipBuyNum 是否已赋值
                     * @return SipBuyNum 是否已赋值
                     * 
                     */
                    bool SipBuyNumHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 座席购买数（还在有效期内）
                     */
                    int64_t m_staffBuyNum;
                    bool m_staffBuyNumHasBeenSet;

                    /**
                     * 座席购买列表 （还在有效期内）
                     */
                    std::vector<StaffBuyInfo> m_staffBuyList;
                    bool m_staffBuyListHasBeenSet;

                    /**
                     * 号码购买列表
                     */
                    std::vector<PhoneNumBuyInfo> m_phoneNumBuyList;
                    bool m_phoneNumBuyListHasBeenSet;

                    /**
                     * 办公电话购买数（还在有效期内）
                     */
                    int64_t m_sipBuyNum;
                    bool m_sipBuyNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SDKAPPIDBUYINFO_H_
