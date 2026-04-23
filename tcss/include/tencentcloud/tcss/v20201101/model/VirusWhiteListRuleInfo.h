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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSWHITELISTRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSWHITELISTRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * VirusWhiteListRuleInfo
                */
                class VirusWhiteListRuleInfo : public AbstractModel
                {
                public:
                    VirusWhiteListRuleInfo();
                    ~VirusWhiteListRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>白名单id</p>
                     * @return Id <p>白名单id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>白名单id</p>
                     * @param _id <p>白名单id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>md5加白内容</p>
                     * @return Md5List <p>md5加白内容</p>
                     * 
                     */
                    std::vector<std::string> GetMd5List() const;

                    /**
                     * 设置<p>md5加白内容</p>
                     * @param _md5List <p>md5加白内容</p>
                     * 
                     */
                    void SetMd5List(const std::vector<std::string>& _md5List);

                    /**
                     * 判断参数 Md5List 是否已赋值
                     * @return Md5List 是否已赋值
                     * 
                     */
                    bool Md5ListHasBeenSet() const;

                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageIds <p>镜像id</p>
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageIds <p>镜像id</p>
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取<p>范围</p>
                     * @return Scope <p>范围</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>范围</p>
                     * @param _scope <p>范围</p>
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>镜像数</p>
                     * @return ImageCount <p>镜像数</p>
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 设置<p>镜像数</p>
                     * @param _imageCount <p>镜像数</p>
                     * 
                     */
                    void SetImageCount(const uint64_t& _imageCount);

                    /**
                     * 判断参数 ImageCount 是否已赋值
                     * @return ImageCount 是否已赋值
                     * 
                     */
                    bool ImageCountHasBeenSet() const;

                    /**
                     * 获取<p>md5数</p>
                     * @return Md5Count <p>md5数</p>
                     * 
                     */
                    uint64_t GetMd5Count() const;

                    /**
                     * 设置<p>md5数</p>
                     * @param _md5Count <p>md5数</p>
                     * 
                     */
                    void SetMd5Count(const uint64_t& _md5Count);

                    /**
                     * 判断参数 Md5Count 是否已赋值
                     * @return Md5Count 是否已赋值
                     * 
                     */
                    bool Md5CountHasBeenSet() const;

                    /**
                     * 获取<p>标记</p>
                     * @return Remark <p>标记</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>标记</p>
                     * @param _remark <p>标记</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>插入时间</p>
                     * @return InsertTime <p>插入时间</p>
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置<p>插入时间</p>
                     * @param _insertTime <p>插入时间</p>
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>白名单id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>md5加白内容</p>
                     */
                    std::vector<std::string> m_md5List;
                    bool m_md5ListHasBeenSet;

                    /**
                     * <p>镜像id</p>
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>范围</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>镜像数</p>
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * <p>md5数</p>
                     */
                    uint64_t m_md5Count;
                    bool m_md5CountHasBeenSet;

                    /**
                     * <p>标记</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>插入时间</p>
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSWHITELISTRULEINFO_H_
