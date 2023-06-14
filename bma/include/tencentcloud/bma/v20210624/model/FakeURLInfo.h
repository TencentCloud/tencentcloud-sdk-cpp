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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_FAKEURLINFO_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_FAKEURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * 仿冒网站信息
                */
                class FakeURLInfo : public AbstractModel
                {
                public:
                    FakeURLInfo();
                    ~FakeURLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仿冒网址ID
                     * @return FakeURLId 仿冒网址ID
                     * 
                     */
                    int64_t GetFakeURLId() const;

                    /**
                     * 设置仿冒网址ID
                     * @param _fakeURLId 仿冒网址ID
                     * 
                     */
                    void SetFakeURLId(const int64_t& _fakeURLId);

                    /**
                     * 判断参数 FakeURLId 是否已赋值
                     * @return FakeURLId 是否已赋值
                     * 
                     */
                    bool FakeURLIdHasBeenSet() const;

                    /**
                     * 获取保护网站
                     * @return ProtectWeb 保护网站
                     * 
                     */
                    std::string GetProtectWeb() const;

                    /**
                     * 设置保护网站
                     * @param _protectWeb 保护网站
                     * 
                     */
                    void SetProtectWeb(const std::string& _protectWeb);

                    /**
                     * 判断参数 ProtectWeb 是否已赋值
                     * @return ProtectWeb 是否已赋值
                     * 
                     */
                    bool ProtectWebHasBeenSet() const;

                    /**
                     * 获取检测时间
                     * @return DetectTime 检测时间
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置检测时间
                     * @param _detectTime 检测时间
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取仿冒网址
                     * @return FakeURL 仿冒网址
                     * 
                     */
                    std::string GetFakeURL() const;

                    /**
                     * 设置仿冒网址
                     * @param _fakeURL 仿冒网址
                     * 
                     */
                    void SetFakeURL(const std::string& _fakeURL);

                    /**
                     * 判断参数 FakeURL 是否已赋值
                     * @return FakeURL 是否已赋值
                     * 
                     */
                    bool FakeURLHasBeenSet() const;

                    /**
                     * 获取截图
                     * @return Snapshot 截图
                     * 
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置截图
                     * @param _snapshot 截图
                     * 
                     */
                    void SetSnapshot(const std::string& _snapshot);

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     * 
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return IP IP地址
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP地址
                     * @param _iP IP地址
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取IP地理位置
                     * @return IPLoc IP地理位置
                     * 
                     */
                    std::string GetIPLoc() const;

                    /**
                     * 设置IP地理位置
                     * @param _iPLoc IP地理位置
                     * 
                     */
                    void SetIPLoc(const std::string& _iPLoc);

                    /**
                     * 判断参数 IPLoc 是否已赋值
                     * @return IPLoc 是否已赋值
                     * 
                     */
                    bool IPLocHasBeenSet() const;

                    /**
                     * 获取热度
                     * @return Heat 热度
                     * 
                     */
                    int64_t GetHeat() const;

                    /**
                     * 设置热度
                     * @param _heat 热度
                     * 
                     */
                    void SetHeat(const int64_t& _heat);

                    /**
                     * 判断参数 Heat 是否已赋值
                     * @return Heat 是否已赋值
                     * 
                     */
                    bool HeatHasBeenSet() const;

                    /**
                     * 获取网址状态
                     * @return Status 网址状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置网址状态
                     * @param _status 网址状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取仿冒网站所属单位
                     * @return FakeURLCompany 仿冒网站所属单位
                     * 
                     */
                    std::string GetFakeURLCompany() const;

                    /**
                     * 设置仿冒网站所属单位
                     * @param _fakeURLCompany 仿冒网站所属单位
                     * 
                     */
                    void SetFakeURLCompany(const std::string& _fakeURLCompany);

                    /**
                     * 判断参数 FakeURLCompany 是否已赋值
                     * @return FakeURLCompany 是否已赋值
                     * 
                     */
                    bool FakeURLCompanyHasBeenSet() const;

                    /**
                     * 获取仿冒网站性质
                     * @return FakeURLAttr 仿冒网站性质
                     * 
                     */
                    std::string GetFakeURLAttr() const;

                    /**
                     * 设置仿冒网站性质
                     * @param _fakeURLAttr 仿冒网站性质
                     * 
                     */
                    void SetFakeURLAttr(const std::string& _fakeURLAttr);

                    /**
                     * 判断参数 FakeURLAttr 是否已赋值
                     * @return FakeURLAttr 是否已赋值
                     * 
                     */
                    bool FakeURLAttrHasBeenSet() const;

                    /**
                     * 获取仿冒网站名称
                     * @return FakeURLName 仿冒网站名称
                     * 
                     */
                    std::string GetFakeURLName() const;

                    /**
                     * 设置仿冒网站名称
                     * @param _fakeURLName 仿冒网站名称
                     * 
                     */
                    void SetFakeURLName(const std::string& _fakeURLName);

                    /**
                     * 判断参数 FakeURLName 是否已赋值
                     * @return FakeURLName 是否已赋值
                     * 
                     */
                    bool FakeURLNameHasBeenSet() const;

                    /**
                     * 获取仿冒网站备案号
                     * @return FakeURLICP 仿冒网站备案号
                     * 
                     */
                    std::string GetFakeURLICP() const;

                    /**
                     * 设置仿冒网站备案号
                     * @param _fakeURLICP 仿冒网站备案号
                     * 
                     */
                    void SetFakeURLICP(const std::string& _fakeURLICP);

                    /**
                     * 判断参数 FakeURLICP 是否已赋值
                     * @return FakeURLICP 是否已赋值
                     * 
                     */
                    bool FakeURLICPHasBeenSet() const;

                    /**
                     * 获取仿冒网站创建时间
                     * @return FakeURLCreateTime 仿冒网站创建时间
                     * 
                     */
                    std::string GetFakeURLCreateTime() const;

                    /**
                     * 设置仿冒网站创建时间
                     * @param _fakeURLCreateTime 仿冒网站创建时间
                     * 
                     */
                    void SetFakeURLCreateTime(const std::string& _fakeURLCreateTime);

                    /**
                     * 判断参数 FakeURLCreateTime 是否已赋值
                     * @return FakeURLCreateTime 是否已赋值
                     * 
                     */
                    bool FakeURLCreateTimeHasBeenSet() const;

                    /**
                     * 获取仿冒网站过期时间
                     * @return FakeURLExpireTime 仿冒网站过期时间
                     * 
                     */
                    std::string GetFakeURLExpireTime() const;

                    /**
                     * 设置仿冒网站过期时间
                     * @param _fakeURLExpireTime 仿冒网站过期时间
                     * 
                     */
                    void SetFakeURLExpireTime(const std::string& _fakeURLExpireTime);

                    /**
                     * 判断参数 FakeURLExpireTime 是否已赋值
                     * @return FakeURLExpireTime 是否已赋值
                     * 
                     */
                    bool FakeURLExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 仿冒网址ID
                     */
                    int64_t m_fakeURLId;
                    bool m_fakeURLIdHasBeenSet;

                    /**
                     * 保护网站
                     */
                    std::string m_protectWeb;
                    bool m_protectWebHasBeenSet;

                    /**
                     * 检测时间
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * 仿冒网址
                     */
                    std::string m_fakeURL;
                    bool m_fakeURLHasBeenSet;

                    /**
                     * 截图
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * IP地理位置
                     */
                    std::string m_iPLoc;
                    bool m_iPLocHasBeenSet;

                    /**
                     * 热度
                     */
                    int64_t m_heat;
                    bool m_heatHasBeenSet;

                    /**
                     * 网址状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 仿冒网站所属单位
                     */
                    std::string m_fakeURLCompany;
                    bool m_fakeURLCompanyHasBeenSet;

                    /**
                     * 仿冒网站性质
                     */
                    std::string m_fakeURLAttr;
                    bool m_fakeURLAttrHasBeenSet;

                    /**
                     * 仿冒网站名称
                     */
                    std::string m_fakeURLName;
                    bool m_fakeURLNameHasBeenSet;

                    /**
                     * 仿冒网站备案号
                     */
                    std::string m_fakeURLICP;
                    bool m_fakeURLICPHasBeenSet;

                    /**
                     * 仿冒网站创建时间
                     */
                    std::string m_fakeURLCreateTime;
                    bool m_fakeURLCreateTimeHasBeenSet;

                    /**
                     * 仿冒网站过期时间
                     */
                    std::string m_fakeURLExpireTime;
                    bool m_fakeURLExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_FAKEURLINFO_H_
