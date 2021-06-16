#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(mrs_public_header
  include/tencentcloud/mrs/v20200910/MrsClient.h
  )

set(mrs_public_header_model
  include/tencentcloud/mrs/v20200910/model/Indicator.h
  include/tencentcloud/mrs/v20200910/model/Template.h
  include/tencentcloud/mrs/v20200910/model/Elastic.h
  include/tencentcloud/mrs/v20200910/model/ReportInfo.h
  include/tencentcloud/mrs/v20200910/model/IHCInfo.h
  include/tencentcloud/mrs/v20200910/model/SurgeryHistory.h
  include/tencentcloud/mrs/v20200910/model/HandleParam.h
  include/tencentcloud/mrs/v20200910/model/ImageToObjectRequest.h
  include/tencentcloud/mrs/v20200910/model/TextToObjectRequest.h
  include/tencentcloud/mrs/v20200910/model/AspectRatio.h
  include/tencentcloud/mrs/v20200910/model/SymptomInfo.h
  include/tencentcloud/mrs/v20200910/model/TuberInfo.h
  include/tencentcloud/mrs/v20200910/model/ObstericalMedicalHistory.h
  include/tencentcloud/mrs/v20200910/model/Multiple.h
  include/tencentcloud/mrs/v20200910/model/Hospitalization.h
  include/tencentcloud/mrs/v20200910/model/FamilyMedicalHistory.h
  include/tencentcloud/mrs/v20200910/model/Advice.h
  include/tencentcloud/mrs/v20200910/model/SurgeryAttr.h
  include/tencentcloud/mrs/v20200910/model/Part.h
  include/tencentcloud/mrs/v20200910/model/ImageToClassResponse.h
  include/tencentcloud/mrs/v20200910/model/Lymph.h
  include/tencentcloud/mrs/v20200910/model/Invas.h
  include/tencentcloud/mrs/v20200910/model/MedicalRecordInfo.h
  include/tencentcloud/mrs/v20200910/model/NormPart.h
  include/tencentcloud/mrs/v20200910/model/MedDoc.h
  include/tencentcloud/mrs/v20200910/model/Desc.h
  include/tencentcloud/mrs/v20200910/model/PatientInfo.h
  include/tencentcloud/mrs/v20200910/model/PersonalMedicalHistory.h
  include/tencentcloud/mrs/v20200910/model/Organ.h
  include/tencentcloud/mrs/v20200910/model/DiagCert.h
  include/tencentcloud/mrs/v20200910/model/TreatmentRecord.h
  include/tencentcloud/mrs/v20200910/model/Value.h
  include/tencentcloud/mrs/v20200910/model/DischargeDiagnosis.h
  include/tencentcloud/mrs/v20200910/model/DiseaseMedicalHistory.h
  include/tencentcloud/mrs/v20200910/model/PathologyReport.h
  include/tencentcloud/mrs/v20200910/model/TextToClassResponse.h
  include/tencentcloud/mrs/v20200910/model/HistologyType.h
  include/tencentcloud/mrs/v20200910/model/BlockInfo.h
  include/tencentcloud/mrs/v20200910/model/Summary.h
  include/tencentcloud/mrs/v20200910/model/TextType.h
  include/tencentcloud/mrs/v20200910/model/HistologyLevel.h
  include/tencentcloud/mrs/v20200910/model/IndicatorItem.h
  include/tencentcloud/mrs/v20200910/model/ImageInfo.h
  include/tencentcloud/mrs/v20200910/model/DiagCertItem.h
  include/tencentcloud/mrs/v20200910/model/MenstrualMedicalHistory.h
  include/tencentcloud/mrs/v20200910/model/ImageToClassRequest.h
  include/tencentcloud/mrs/v20200910/model/NormSize.h
  include/tencentcloud/mrs/v20200910/model/FirstPage.h
  include/tencentcloud/mrs/v20200910/model/Check.h
  include/tencentcloud/mrs/v20200910/model/TextToObjectResponse.h
  include/tencentcloud/mrs/v20200910/model/TextToClassRequest.h
  include/tencentcloud/mrs/v20200910/model/Surgery.h
  include/tencentcloud/mrs/v20200910/model/ImageToObjectResponse.h
  include/tencentcloud/mrs/v20200910/model/Size.h
  )

set(mrs_src
  src/v20200910/MrsClient.cpp
  src/v20200910/model/Indicator.cpp
  src/v20200910/model/Template.cpp
  src/v20200910/model/Elastic.cpp
  src/v20200910/model/ReportInfo.cpp
  src/v20200910/model/IHCInfo.cpp
  src/v20200910/model/SurgeryHistory.cpp
  src/v20200910/model/HandleParam.cpp
  src/v20200910/model/ImageToObjectRequest.cpp
  src/v20200910/model/TextToObjectRequest.cpp
  src/v20200910/model/AspectRatio.cpp
  src/v20200910/model/SymptomInfo.cpp
  src/v20200910/model/TuberInfo.cpp
  src/v20200910/model/ObstericalMedicalHistory.cpp
  src/v20200910/model/Multiple.cpp
  src/v20200910/model/Hospitalization.cpp
  src/v20200910/model/FamilyMedicalHistory.cpp
  src/v20200910/model/Advice.cpp
  src/v20200910/model/SurgeryAttr.cpp
  src/v20200910/model/Part.cpp
  src/v20200910/model/ImageToClassResponse.cpp
  src/v20200910/model/Lymph.cpp
  src/v20200910/model/Invas.cpp
  src/v20200910/model/MedicalRecordInfo.cpp
  src/v20200910/model/NormPart.cpp
  src/v20200910/model/MedDoc.cpp
  src/v20200910/model/Desc.cpp
  src/v20200910/model/PatientInfo.cpp
  src/v20200910/model/PersonalMedicalHistory.cpp
  src/v20200910/model/Organ.cpp
  src/v20200910/model/DiagCert.cpp
  src/v20200910/model/TreatmentRecord.cpp
  src/v20200910/model/Value.cpp
  src/v20200910/model/DischargeDiagnosis.cpp
  src/v20200910/model/DiseaseMedicalHistory.cpp
  src/v20200910/model/PathologyReport.cpp
  src/v20200910/model/TextToClassResponse.cpp
  src/v20200910/model/HistologyType.cpp
  src/v20200910/model/BlockInfo.cpp
  src/v20200910/model/Summary.cpp
  src/v20200910/model/TextType.cpp
  src/v20200910/model/HistologyLevel.cpp
  src/v20200910/model/IndicatorItem.cpp
  src/v20200910/model/ImageInfo.cpp
  src/v20200910/model/DiagCertItem.cpp
  src/v20200910/model/MenstrualMedicalHistory.cpp
  src/v20200910/model/ImageToClassRequest.cpp
  src/v20200910/model/NormSize.cpp
  src/v20200910/model/FirstPage.cpp
  src/v20200910/model/Check.cpp
  src/v20200910/model/TextToObjectResponse.cpp
  src/v20200910/model/TextToClassRequest.cpp
  src/v20200910/model/Surgery.cpp
  src/v20200910/model/ImageToObjectResponse.cpp
  src/v20200910/model/Size.cpp
  )

set(mrs_include
    include/tencentcloud/mrs
  )

add_library(mrs ${LIB_TYPE}
  ${mrs_public_header}
  ${mrs_public_header_model}
  ${mrs_src})

set_target_properties(mrs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mrs
  )

target_include_directories(mrs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mrs
  core)

#install(FILES ${mrs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mrs/v20200910)
#install(FILES ${mrs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mrs/v20200910/model)
install(DIRECTORY ${mrs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mrs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
