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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_SOCCHECKRESULT_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_SOCCHECKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云安全配置检测结果
                */
                class SocCheckResult : public AbstractModel
                {
                public:
                    SocCheckResult();
                    ~SocCheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项的uuid
                     * @return CheckId 检查项的uuid
                     * 
                     */
                    std::string GetCheckId() const;

                    /**
                     * 设置检查项的uuid
                     * @param _checkId 检查项的uuid
                     * 
                     */
                    void SetCheckId(const std::string& _checkId);

                    /**
                     * 判断参数 CheckId 是否已赋值
                     * @return CheckId 是否已赋值
                     * 
                     */
                    bool CheckIdHasBeenSet() const;

                    /**
                     * 获取配置要求
                     * @return Name 配置要求
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置要求
                     * @param _name 配置要求
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
                     * 获取检查项的类型
                     * @return Type 检查项的类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置检查项的类型
                     * @param _type 检查项的类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取检查对象
                     * @return AssetType 检查对象
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置检查对象
                     * @param _assetType 检查对象
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取策略名
                     * @return PloyName 策略名
                     * 
                     */
                    std::string GetPloyName() const;

                    /**
                     * 设置策略名
                     * @param _ployName 策略名
                     * 
                     */
                    void SetPloyName(const std::string& _ployName);

                    /**
                     * 判断参数 PloyName 是否已赋值
                     * @return PloyName 是否已赋值
                     * 
                     */
                    bool PloyNameHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return PloyId 策略id
                     * 
                     */
                    int64_t GetPloyId() const;

                    /**
                     * 设置策略id
                     * @param _ployId 策略id
                     * 
                     */
                    void SetPloyId(const int64_t& _ployId);

                    /**
                     * 判断参数 PloyId 是否已赋值
                     * @return PloyId 是否已赋值
                     * 
                     */
                    bool PloyIdHasBeenSet() const;

                    /**
                     * 获取正常,低危,中危,高危
                     * @return Result 正常,低危,中危,高危
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置正常,低危,中危,高危
                     * @param _result 正常,低危,中危,高危
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取不符合数
                     * @return FailAssetNum 不符合数
                     * 
                     */
                    int64_t GetFailAssetNum() const;

                    /**
                     * 设置不符合数
                     * @param _failAssetNum 不符合数
                     * 
                     */
                    void SetFailAssetNum(const int64_t& _failAssetNum);

                    /**
                     * 判断参数 FailAssetNum 是否已赋值
                     * @return FailAssetNum 是否已赋值
                     * 
                     */
                    bool FailAssetNumHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalAssetNum 总数
                     * 
                     */
                    int64_t GetTotalAssetNum() const;

                    /**
                     * 设置总数
                     * @param _totalAssetNum 总数
                     * 
                     */
                    void SetTotalAssetNum(const int64_t& _totalAssetNum);

                    /**
                     * 判断参数 TotalAssetNum 是否已赋值
                     * @return TotalAssetNum 是否已赋值
                     * 
                     */
                    bool TotalAssetNumHasBeenSet() const;

                    /**
                     * 获取处置建议url链接
                     * @return DealUrl 处置建议url链接
                     * 
                     */
                    std::string GetDealUrl() const;

                    /**
                     * 设置处置建议url链接
                     * @param _dealUrl 处置建议url链接
                     * 
                     */
                    void SetDealUrl(const std::string& _dealUrl);

                    /**
                     * 判断参数 DealUrl 是否已赋值
                     * @return DealUrl 是否已赋值
                     * 
                     */
                    bool DealUrlHasBeenSet() const;

                private:

                    /**
                     * 检查项的uuid
                     */
                    std::string m_checkId;
                    bool m_checkIdHasBeenSet;

                    /**
                     * 配置要求
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检查项的类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 检查对象
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 策略名
                     */
                    std::string m_ployName;
                    bool m_ployNameHasBeenSet;

                    /**
                     * 策略id
                     */
                    int64_t m_ployId;
                    bool m_ployIdHasBeenSet;

                    /**
                     * 正常,低危,中危,高危
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 不符合数
                     */
                    int64_t m_failAssetNum;
                    bool m_failAssetNumHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_totalAssetNum;
                    bool m_totalAssetNumHasBeenSet;

                    /**
                     * 处置建议url链接
                     */
                    std::string m_dealUrl;
                    bool m_dealUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SOCCHECKRESULT_H_
