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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENELISTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBotSceneList请求参数结构体
                */
                class DescribeBotSceneListRequest : public AbstractModel
                {
                public:
                    DescribeBotSceneListRequest();
                    ~DescribeBotSceneListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取每页数量
                     * @return Limit 每页数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量
                     * @param _limit 每页数量
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return Offset 页码
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页码
                     * @param _offset 页码
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取场景模板类型，通过此下拉字段进行场景筛选。全部: all 登录: login  秒杀:seckill  爬内容：crawl 自定义: custom
                     * @return BusinessType 场景模板类型，通过此下拉字段进行场景筛选。全部: all 登录: login  秒杀:seckill  爬内容：crawl 自定义: custom
                     * 
                     */
                    std::vector<std::string> GetBusinessType() const;

                    /**
                     * 设置场景模板类型，通过此下拉字段进行场景筛选。全部: all 登录: login  秒杀:seckill  爬内容：crawl 自定义: custom
                     * @param _businessType 场景模板类型，通过此下拉字段进行场景筛选。全部: all 登录: login  秒杀:seckill  爬内容：crawl 自定义: custom
                     * 
                     */
                    void SetBusinessType(const std::vector<std::string>& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取通过场景名称模糊搜索
                     * @return SceneName 通过场景名称模糊搜索
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置通过场景名称模糊搜索
                     * @param _sceneName 通过场景名称模糊搜索
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取是否只显示默认场景
                     * @return IsDefault 是否只显示默认场景
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否只显示默认场景
                     * @param _isDefault 是否只显示默认场景
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取是否仅显示生效场景
                     * @return IsValid 是否仅显示生效场景
                     * 
                     */
                    bool GetIsValid() const;

                    /**
                     * 设置是否仅显示生效场景
                     * @param _isValid 是否仅显示生效场景
                     * 
                     */
                    void SetIsValid(const bool& _isValid);

                    /**
                     * 判断参数 IsValid 是否已赋值
                     * @return IsValid 是否已赋值
                     * 
                     */
                    bool IsValidHasBeenSet() const;

                    /**
                     * 获取要查询的场景id
                     * @return SceneId 要查询的场景id
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置要查询的场景id
                     * @param _sceneId 要查询的场景id
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 每页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 场景模板类型，通过此下拉字段进行场景筛选。全部: all 登录: login  秒杀:seckill  爬内容：crawl 自定义: custom
                     */
                    std::vector<std::string> m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 通过场景名称模糊搜索
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * 是否只显示默认场景
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 是否仅显示生效场景
                     */
                    bool m_isValid;
                    bool m_isValidHasBeenSet;

                    /**
                     * 要查询的场景id
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENELISTREQUEST_H_
