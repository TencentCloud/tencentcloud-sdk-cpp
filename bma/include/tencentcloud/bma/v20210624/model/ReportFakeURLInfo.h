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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_REPORTFAKEURLINFO_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_REPORTFAKEURLINFO_H_

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
                * 举报网址信息
                */
                class ReportFakeURLInfo : public AbstractModel
                {
                public:
                    ReportFakeURLInfo();
                    ~ReportFakeURLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取xxx
                     * @return FakeURLId xxx
                     */
                    int64_t GetFakeURLId() const;

                    /**
                     * 设置xxx
                     * @param FakeURLId xxx
                     */
                    void SetFakeURLId(const int64_t& _fakeURLId);

                    /**
                     * 判断参数 FakeURLId 是否已赋值
                     * @return FakeURLId 是否已赋值
                     */
                    bool FakeURLIdHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return DetectTime xxx
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置xxx
                     * @param DetectTime xxx
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return ProtectURL xxx
                     */
                    std::string GetProtectURL() const;

                    /**
                     * 设置xxx
                     * @param ProtectURL xxx
                     */
                    void SetProtectURL(const std::string& _protectURL);

                    /**
                     * 判断参数 ProtectURL 是否已赋值
                     * @return ProtectURL 是否已赋值
                     */
                    bool ProtectURLHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return ProtectWeb xxx
                     */
                    std::string GetProtectWeb() const;

                    /**
                     * 设置xxx
                     * @param ProtectWeb xxx
                     */
                    void SetProtectWeb(const std::string& _protectWeb);

                    /**
                     * 判断参数 ProtectWeb 是否已赋值
                     * @return ProtectWeb 是否已赋值
                     */
                    bool ProtectWebHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return FakeURL xxx
                     */
                    std::string GetFakeURL() const;

                    /**
                     * 设置xxx
                     * @param FakeURL xxx
                     */
                    void SetFakeURL(const std::string& _fakeURL);

                    /**
                     * 判断参数 FakeURL 是否已赋值
                     * @return FakeURL 是否已赋值
                     */
                    bool FakeURLHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return Snapshot xxx
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置xxx
                     * @param Snapshot xxx
                     */
                    void SetSnapshot(const std::string& _snapshot);

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return IP xxx
                     */
                    std::string GetIP() const;

                    /**
                     * 设置xxx
                     * @param IP xxx
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return IPLoc xxx
                     */
                    std::string GetIPLoc() const;

                    /**
                     * 设置xxx
                     * @param IPLoc xxx
                     */
                    void SetIPLoc(const std::string& _iPLoc);

                    /**
                     * 判断参数 IPLoc 是否已赋值
                     * @return IPLoc 是否已赋值
                     */
                    bool IPLocHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return Heat xxx
                     */
                    int64_t GetHeat() const;

                    /**
                     * 设置xxx
                     * @param Heat xxx
                     */
                    void SetHeat(const int64_t& _heat);

                    /**
                     * 判断参数 Heat 是否已赋值
                     * @return Heat 是否已赋值
                     */
                    bool HeatHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return Status xxx
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置xxx
                     * @param Status xxx
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return Note xxx
                     */
                    std::string GetNote() const;

                    /**
                     * 设置xxx
                     * @param Note xxx
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return FakeURLCompany xxx
                     */
                    std::string GetFakeURLCompany() const;

                    /**
                     * 设置xxx
                     * @param FakeURLCompany xxx
                     */
                    void SetFakeURLCompany(const std::string& _fakeURLCompany);

                    /**
                     * 判断参数 FakeURLCompany 是否已赋值
                     * @return FakeURLCompany 是否已赋值
                     */
                    bool FakeURLCompanyHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return FakeURLAttr xxx
                     */
                    std::string GetFakeURLAttr() const;

                    /**
                     * 设置xxx
                     * @param FakeURLAttr xxx
                     */
                    void SetFakeURLAttr(const std::string& _fakeURLAttr);

                    /**
                     * 判断参数 FakeURLAttr 是否已赋值
                     * @return FakeURLAttr 是否已赋值
                     */
                    bool FakeURLAttrHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return FakeURLName xxx
                     */
                    std::string GetFakeURLName() const;

                    /**
                     * 设置xxx
                     * @param FakeURLName xxx
                     */
                    void SetFakeURLName(const std::string& _fakeURLName);

                    /**
                     * 判断参数 FakeURLName 是否已赋值
                     * @return FakeURLName 是否已赋值
                     */
                    bool FakeURLNameHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return FakeURLICP xxx
                     */
                    std::string GetFakeURLICP() const;

                    /**
                     * 设置xxx
                     * @param FakeURLICP xxx
                     */
                    void SetFakeURLICP(const std::string& _fakeURLICP);

                    /**
                     * 判断参数 FakeURLICP 是否已赋值
                     * @return FakeURLICP 是否已赋值
                     */
                    bool FakeURLICPHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return FakeURLCreateTime xxx
                     */
                    std::string GetFakeURLCreateTime() const;

                    /**
                     * 设置xxx
                     * @param FakeURLCreateTime xxx
                     */
                    void SetFakeURLCreateTime(const std::string& _fakeURLCreateTime);

                    /**
                     * 判断参数 FakeURLCreateTime 是否已赋值
                     * @return FakeURLCreateTime 是否已赋值
                     */
                    bool FakeURLCreateTimeHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return FakeURLExpireTime xxx
                     */
                    std::string GetFakeURLExpireTime() const;

                    /**
                     * 设置xxx
                     * @param FakeURLExpireTime xxx
                     */
                    void SetFakeURLExpireTime(const std::string& _fakeURLExpireTime);

                    /**
                     * 判断参数 FakeURLExpireTime 是否已赋值
                     * @return FakeURLExpireTime 是否已赋值
                     */
                    bool FakeURLExpireTimeHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return BlockTime xxx
                     */
                    std::string GetBlockTime() const;

                    /**
                     * 设置xxx
                     * @param BlockTime xxx
                     */
                    void SetBlockTime(const std::string& _blockTime);

                    /**
                     * 判断参数 BlockTime 是否已赋值
                     * @return BlockTime 是否已赋值
                     */
                    bool BlockTimeHasBeenSet() const;

                private:

                    /**
                     * xxx
                     */
                    int64_t m_fakeURLId;
                    bool m_fakeURLIdHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_protectURL;
                    bool m_protectURLHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_protectWeb;
                    bool m_protectWebHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_fakeURL;
                    bool m_fakeURLHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_iPLoc;
                    bool m_iPLocHasBeenSet;

                    /**
                     * xxx
                     */
                    int64_t m_heat;
                    bool m_heatHasBeenSet;

                    /**
                     * xxx
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_fakeURLCompany;
                    bool m_fakeURLCompanyHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_fakeURLAttr;
                    bool m_fakeURLAttrHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_fakeURLName;
                    bool m_fakeURLNameHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_fakeURLICP;
                    bool m_fakeURLICPHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_fakeURLCreateTime;
                    bool m_fakeURLCreateTimeHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_fakeURLExpireTime;
                    bool m_fakeURLExpireTimeHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_blockTime;
                    bool m_blockTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_REPORTFAKEURLINFO_H_
