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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEVIRUSWHITELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEVIRUSWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateImageVirusWhitelist请求参数结构体
                */
                class CreateImageVirusWhitelistRequest : public AbstractModel
                {
                public:
                    CreateImageVirusWhitelistRequest();
                    ~CreateImageVirusWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>木马白名单md5</p>
                     * @return Md5List <p>木马白名单md5</p>
                     * 
                     */
                    std::vector<std::string> GetMd5List() const;

                    /**
                     * 设置<p>木马白名单md5</p>
                     * @param _md5List <p>木马白名单md5</p>
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
                     * 获取<p>白名单生效范围</p><p>枚举值：</p><ul><li>0： 自选镜像</li><li>1： 全部镜像</li></ul>
                     * @return Scope <p>白名单生效范围</p><p>枚举值：</p><ul><li>0： 自选镜像</li><li>1： 全部镜像</li></ul>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>白名单生效范围</p><p>枚举值：</p><ul><li>0： 自选镜像</li><li>1： 全部镜像</li></ul>
                     * @param _scope <p>白名单生效范围</p><p>枚举值：</p><ul><li>0： 自选镜像</li><li>1： 全部镜像</li></ul>
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
                     * 获取<p>镜像id</p>
                     * @return ImageIds <p>镜像id</p>
                     * 
                     */
                    std::vector<uint64_t> GetImageIds() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageIds <p>镜像id</p>
                     * 
                     */
                    void SetImageIds(const std::vector<uint64_t>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
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
                     * 获取<p>木马id</p>
                     * @return VirusId <p>木马id</p>
                     * 
                     */
                    std::vector<uint64_t> GetVirusId() const;

                    /**
                     * 设置<p>木马id</p>
                     * @param _virusId <p>木马id</p>
                     * 
                     */
                    void SetVirusId(const std::vector<uint64_t>& _virusId);

                    /**
                     * 判断参数 VirusId 是否已赋值
                     * @return VirusId 是否已赋值
                     * 
                     */
                    bool VirusIdHasBeenSet() const;

                    /**
                     * 获取<p>木马白名单名</p>
                     * @return Name <p>木马白名单名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>木马白名单名</p>
                     * @param _name <p>木马白名单名</p>
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
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>0： 禁用</li><li>1： 启用</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>0： 禁用</li><li>1： 启用</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>0： 禁用</li><li>1： 启用</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>0： 禁用</li><li>1： 启用</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>木马白名单md5</p>
                     */
                    std::vector<std::string> m_md5List;
                    bool m_md5ListHasBeenSet;

                    /**
                     * <p>白名单生效范围</p><p>枚举值：</p><ul><li>0： 自选镜像</li><li>1： 全部镜像</li></ul>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>镜像id</p>
                     */
                    std::vector<uint64_t> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>木马id</p>
                     */
                    std::vector<uint64_t> m_virusId;
                    bool m_virusIdHasBeenSet;

                    /**
                     * <p>木马白名单名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>0： 禁用</li><li>1： 启用</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIMAGEVIRUSWHITELISTREQUEST_H_
